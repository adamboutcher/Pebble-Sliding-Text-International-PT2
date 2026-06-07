#include "strings-ca.h"

const char* const HOURS_CA[] = {
  // AM hours
  "dotze",
  "una",
  "dos",
  "tres",
  "quatre",
  "cinc",
  "sis",
  "set",
  "vuit",
  "nou",
  "deu",
  "onze",

  // PM hours
  "dotze",
  "una",
  "dos",
  "tres",
  "quatre",
  "cinc",
  "sis",
  "set",
  "vuit",
  "nou",
  "deu",
  "onze"
};

/**
 * The string "$1" will be replaced with the current hour (e.g., "three"
 * at 3:45).  The string "$2" will be replaced with the *next* hour
 * (e.g., "four" at 3:45).
 *
 * A "*" character before a word makes that word bold.
 */
const char* const RELS_CA[] = {
  "*$1 en punt",
  "*$1 y cinc",
  "*$1 y deu",
  "un quart de *$2",
  "un quart i cinc de *$2",
  "un quart i deu *$2",
  "dos quarts de *$2",
  "dos quarts i cinc de *$2",
  "dos quarts i deu de *$2",
  "tres quarts de *$2",
  "tres quarts i cinc de *$2",
  "tres quarts i deu de *$2"
};

const char* const MINUTES_CA[60] = {
  "en punt",       "un",           "dos",          "tres",
  "quatre",        "cinc",         "sis",          "set",
  "vuit",          "nou",          "deu",          "onze",
  "dotze",         "tretze",       "catorze",      "quinze",
  "setze",         "disset",       "divuit",       "dinou",
  "vint",          "vint-i-un",    "vint-i-dos",   "vint-i-tres",
  "vint-i-quatre", "vint-i-cinc",  "vint-i-sis",   "vint-i-set",
  "vint-i-vuit",   "vint-i-nou",   "trenta",       "trenta-un",
  "trenta-dos",    "trenta-tres",  "trenta-quatre", "trenta-cinc",
  "trenta-sis",    "trenta-set",   "trenta-vuit",  "trenta-nou",
  "quaranta",      "quaranta-un",  "quaranta-dos", "quaranta-tres",
  "quaranta-quatre","quaranta-cinc","quaranta-sis","quaranta-set",
  "quaranta-vuit", "quaranta-nou", "cinquanta",    "cinquanta-un",
  "cinquanta-dos", "cinquanta-tres","cinquanta-quatre","cinquanta-cinc",
  "cinquanta-sis", "cinquanta-set","cinquanta-vuit","cinquanta-nou"
};

const char* date_suffix_CA(int date) { return ""; }
