# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Build

Requires the Pebble SDK (and the `waf` build tool it ships with).

```bash
./waf configure && ./waf build
```

The configure step also runs `jshint` over `src/pkjs/pebble-js-app.js`. The compiled `.pbw` lands in `build/`.

There is no test suite. To manually verify time display logic, set `#define DEBUG 1` at the top of `src/c/TextWatch.c` — this turns the watchface into a standard app where the UP/DOWN buttons step the displayed time forward/backward in 5-minute increments.

## Architecture

The watchface has two layers: C firmware code and a JavaScript companion app.

### C firmware (`src/c/`)

**`TextWatch.c`** — display and animation engine. Manages four `Line` structs, each holding a `currentLayer` and `nextLayer` (`TextLayer`). On every minute tick, it calls `time_to_words()` to get a space-separated string, splits it into up to four words/phrases via `time_to_lines()`, then slides each changed line left-to-right with staggered `PropertyAnimation`s (400 ms duration, 150 ms stagger, 100 ms out-before-in delay). A `*` prefix on a word in the string signals bold font for that line. Shaking the watch toggles to a date view with an auto-revert timer.

Settings (invert, alignment, language, font size, show-date, date-timeout) are persisted with `persist_read/write_*` and kept in sync with the companion app via `AppSync`.

**`num2words.c` / `num2words.h`** — time and date conversion. `time_to_words()` looks up the hour word from `HOURS_XX[hours % 12]` and the minute word from `MINUTES_XX[minutes]`, then writes `"*<hour> <minutes> "` into the output buffer (the leading `*` marks the hour bold). `date_to_words()` formats a date string using a per-language `DATE_FORMAT_XX` template with `$1/$2/$3` placeholders.

**`strings-<lang>.c` / `.h`** (one pair per language) — all translatable strings. Each file defines:
- `HOURS_XX[24]` — hour words, 0–23 (0 = "twelve", repeated for AM/PM)
- `RELS_XX[12]` — legacy fuzzy-time phrases (no longer used for time display; kept in the struct)
- `MINUTES_XX[60]` — minute words, index 0 = `""` (exact hour, no minutes word shown), 1–9 = single-digit words, 10–59 = full number words
- `date_suffix_XX()` — ordinal suffix for the date number

The `LangStrings` struct in `num2words.c` aggregates all three arrays; the `ALL_LANGUAGES` X-macro in `num2words.h` drives the enum, struct initialisation, and switch cases so that adding a new language only requires adding one row to the macro plus a new `strings-<lang>.c/.h` pair.

### JavaScript companion (`src/pkjs/`)

**`pebble-js-app.js`** — handles `showConfiguration` / `webviewclosed` Pebble events. Serialises settings to `localStorage` and sends them to the watch as an `AppMessage` dict keyed by integer (matching the `*_KEY` constants in `TextWatch.c`). The `langs` map values **must** stay in sync with the `Language` enum in `num2words.h`.

**`config-html.js`** — exports a `configHTML` string containing the full settings UI as an inline HTML page. Opened via `Pebble.openURL('data:text/html,...')`.

## Adding a language

1. Add a row to `ALL_LANGUAGES` in `src/c/num2words.h`
2. Add `#include "strings-<id>.h"` in `src/c/num2words.c`
3. Create `src/c/strings-<id>.h` and `strings-<id>.c` with `HOURS_XX[24]`, `RELS_XX[12]`, `MINUTES_XX[60]`, and `date_suffix_XX()`
4. Add the language to the `langs` map in `src/pkjs/pebble-js-app.js` and to the options UI in `src/pkjs/config-html.js`
