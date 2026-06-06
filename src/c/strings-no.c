#include "strings-no.h"

const char* const HOURS_NO[] = {
  // AM hours
  "tolv",
  "ett",
  "to",
  "tre",
  "fire",
  "fem",
  "seks",
  "sju",
  "åtte",
  "ni",
  "ti",
  "elleve",

  // PM hours
  "tolv",
  "ett",
  "to",
  "tre",
  "fire",
  "fem",
  "seks",
  "sju",
  "åtte",
  "ni",
  "ti",
  "elleve"
};

/**
 * The string "$1" will be replaced with the current hour (e.g., "three"
 * at 3:45).  The string "$2" will be replaced with the *next* hour
 * (e.g., "four" at 3:45).
 *
 * A "*" character before a word makes that word bold.
 */
const char* const RELS_NO[] = {
  "klokka er *$1",
  "fem over *$1",
  "ti over *$1",
  "kvart over *$1",
  "ti på halv *$2",
  "fem på halv *$2",
  "halv *$2",
  "fem over halv *$2",
  "ti over halv *$2",
  "kvart på *$2",
  "ti på *$2",
  "fem på *$2"
};

const char* const MINUTES_NO[60] = {
  "",           "ett",        "to",         "tre",
  "fire",       "fem",        "seks",       "sju",
  "åtte",       "ni",         "ti",         "elleve",
  "tolv",       "tretten",    "fjorten",    "femten",
  "seksten",    "sytten",     "atten",      "nitten",
  "tjue",       "tjueen",     "tjueto",     "tjuetre",
  "tjuefire",   "tjuefem",    "tjueseks",   "tjuesju",
  "tjueåtte",   "tjueni",     "tretti",     "trettien",
  "trettito",   "trettitre",  "trettifire", "trettifem",
  "trettiseks", "trettisju",  "trettiåtte", "trettini",
  "førti",      "førtien",    "førtito",    "førtitre",
  "førtifire",  "førtifem",   "førtiseks",  "førtisju",
  "førtiåtte",  "førtini",    "femti",      "femtien",
  "femtito",    "femtitre",   "femtifire",  "femtifem",
  "femtiseks",  "femtisju",   "femtiåtte",  "femtini"
};

const char* date_suffix_NO(int date) { return ""; }
