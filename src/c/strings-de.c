#include "strings-de.h"

const char* const HOURS_DE[] = {
  // AM hours
  "zwölf",
  "eins",
  "zwei",
  "drei",
  "vier",
  "fünf",
  "sechs",
  "sieben",
  "acht",
  "neun",
  "zehn",
  "elf",

  // PM hours
  "zwölf",
  "eins",
  "zwei",
  "drei",
  "vier",
  "fünf",
  "sechs",
  "sieben",
  "acht",
  "neun",
  "zehn",
  "elf"
};

/**
 * The string "$1" will be replaced with the current hour (e.g., "three"
 * at 3:45).  The string "$2" will be replaced with the *next* hour
 * (e.g., "four" at 3:45).
 *
 * A "*" character before a word makes that word bold.
 */
const char* const RELS_DE[] = {
  "*$1 Uhr",
  "fünf nach *$1",
  "zehn nach *$1",
  "viertel nach *$1",
  "zwanzig nach *$1",
  "fünf vor halb *$2",
  "halb *$2",
  "fünf nach halb *$2",
  "zwanzig vor *$2",
  "viertel vor *$2",
  "zehn vor *$2",
  "fünf vor *$2"
};

const char* const MINUTES_DE[60] = {
  "",                  "null eins",         "null zwei",         "null drei",
  "null vier",         "null fünf",         "null sechs",        "null sieben",
  "null acht",         "null neun",         "zehn",              "elf",
  "zwölf",             "dreizehn",          "vierzehn",          "fünfzehn",
  "sechzehn",          "siebzehn",          "achtzehn",          "neunzehn",
  "zwanzig",           "einundzwanzig",     "zweiundzwanzig",    "dreiundzwanzig",
  "vierundzwanzig",    "fünfundzwanzig",    "sechsundzwanzig",   "siebenundzwanzig",
  "achtundzwanzig",    "neunundzwanzig",    "dreißig",           "einunddreißig",
  "zweiunddreißig",    "dreiunddreißig",    "vierunddreißig",    "fünfunddreißig",
  "sechsunddreißig",   "siebenunddreißig",  "achtunddreißig",    "neununddreißig",
  "vierzig",           "einundvierzig",     "zweiundvierzig",    "dreiundvierzig",
  "vierundvierzig",    "fünfundvierzig",    "sechsundvierzig",   "siebenundvierzig",
  "achtundvierzig",    "neunundvierzig",    "fünfzig",           "einundfünfzig",
  "zweiundfünfzig",    "dreiundfünfzig",    "vierundfünfzig",    "fünfundfünfzig",
  "sechsundfünfzig",   "siebenundfünfzig",  "achtundfünfzig",    "neunundfünfzig"
};

const char* date_suffix_DE(int date) { return ""; }
