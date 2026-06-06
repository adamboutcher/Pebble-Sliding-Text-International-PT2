#include "strings-fr.h"

const char* const HOURS_FR[] = {
  // AM hours
  "douze",
  "une",
  "deux",
  "trois",
  "quatre",
  "cinq",
  "six",
  "sept",
  "huit",
  "neuf",
  "dix",
  "onze",

  // PM hours
  "douze",
  "une",
  "deux",
  "trois",
  "quatre",
  "cinq",
  "six",
  "sept",
  "huit",
  "neuf",
  "dix",
  "onze"
};

/**
 * The string "$1" will be replaced with the current hour (e.g., "three"
 * at 3:45).  The string "$2" will be replaced with the *next* hour
 * (e.g., "four" at 3:45).
 *
 * A "*" character before a word makes that word bold.
 */
const char* const RELS_FR[] = {
  "*$1 heures",
  "*$1 heures cinq",
  "*$1 heures dix",
  "*$1 heures et quart",
  "*$1 heures vingt",
  "*$1 heures vingt- cinq",
  "*$1 heures et demie",
  "*$2 moins vingt- cinq",
  "*$2 heures moins vingt",
  "*$2 moins le quart",
  "*$2 heures moins dix",
  "*$2 heures moins cinq"
};

// TODO: In all of the above strings "heures" should "heure" (singular)
// when the printed hour is "une".

// TODO: A couple of strings are shortened because the idiomatic
// versions would not fit on the screen:
// - "*$2 heures moins vingt-cinq" -> "*$2 moins vingt-cinq"
// - "*$2 heures moins le quart" -> "*$2 moins le quart"

const char* const MINUTES_FR[60] = {
  "",               "zéro un",       "zéro deux",     "zéro trois",
  "zéro quatre",    "zéro cinq",     "zéro six",      "zéro sept",
  "zéro huit",      "zéro neuf",     "dix",           "onze",
  "douze",          "treize",        "quatorze",      "quinze",
  "seize",          "dix-sept",      "dix-huit",      "dix-neuf",
  "vingt",          "vingt et un",   "vingt-deux",    "vingt-trois",
  "vingt-quatre",   "vingt-cinq",    "vingt-six",     "vingt-sept",
  "vingt-huit",     "vingt-neuf",    "trente",        "trente et un",
  "trente-deux",    "trente-trois",  "trente-quatre", "trente-cinq",
  "trente-six",     "trente-sept",   "trente-huit",   "trente-neuf",
  "quarante",       "quarante et un","quarante-deux", "quarante-trois",
  "quarante-quatre","quarante-cinq", "quarante-six",  "quarante-sept",
  "quarante-huit",  "quarante-neuf", "cinquante",     "cinquante et un",
  "cinquante-deux", "cinquante-trois","cinquante-quatre","cinquante-cinq",
  "cinquante-six",  "cinquante-sept","cinquante-huit","cinquante-neuf"
};

const char* date_suffix_FR(int date) { return ""; }
