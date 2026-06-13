Sliding Text International
==========================

A watchface for the [Pebble][] that displays the exact time as spoken words —
"**twelve** twenty four", "**five** fifty six" — with a smooth staggered
slide animation between lines.

[Pebble]: https://getpebble.com/

Based on the original [PebbleTextWatch][] by Mihai Dumitrache, the
[Swedish fuzzy text watch][] by Mattias Bäcklund, and the multi-language
[Fuzzy Text International][] by Jesse Hallett.

[PebbleTextWatch]: https://github.com/wearewip/PebbleTextWatch
[Swedish fuzzy text watch]: https://github.com/Sarastro72/Swedish-Fuzzy-Text-watch
[Fuzzy Text International]: https://github.com/hallettj/Fuzzy-Text-International


Features
--------

- Exact time in natural language (e.g. "**eight** thirty one")
- On the hour shows the o'clock equivalent ("**five** o'clock", "**fünf** Uhr")
- Large, easy-to-read fonts with a staggered slide animation
- Up to four lines of text; short words share a line where they fit
- Shake to show the date, with configurable auto-revert timeout

The following options can be configured via the Pebble app on your phone:

- **Language** — see list below
- **Invert colors** — white-on-black or black-on-white
- **Text alignment** — centre, left, or right
- **Font size** — small, medium, or large
- **Show date on shake** — enable/disable
- **Date view timeout** — 3 s, 5 s, 8 s, 1 min, or never


Languages
---------

| Language | Code |
|---|---|
| Deutsch | `de` |
| English (Great Britain) | `en_GB` |
| English (United States) | `en_US` |
| Español | `es` |
| Français | `fr` |
| Nederlands | `nl` |
| Português | `pt` |
| Svenska | `sv` |


Authors
-------

Thanks to all of the people who made this watchface possible:

- [Mihai Dumitrache][Mihai] — original open source Text Watch
- [Mattias Bäcklund][Mattias] — Swedish fuzzy text watch
- [Jesse Hallett][Jesse] — configuration options and multi-language support
- [Filip Horvei][iFlips] — Norwegian translation (original fuzzy-time version)
- Tomi De Lucca — iOS bug fix and Spanish translation assistance
- [Adam Boutcher][Adam] — exact time display, additional languages, PT2 fork

[Mihai]: https://github.com/mmdumi
[Mattias]: https://github.com/Sarastro72
[Jesse]: https://github.com/hallettj
[iFlips]: https://github.com/iFlips
[Adam]: https://github.com/adamboutcher


Contributing
------------

To add a new language, see the instructions in `CLAUDE.md`.

Please feel free to open issues for bug reports, translation corrections,
or feature requests. Pull requests are welcome.
