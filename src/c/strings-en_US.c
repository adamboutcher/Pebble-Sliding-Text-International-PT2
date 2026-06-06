#include "strings-en_US.h"

const char* const HOURS_EN_US[] = {
  // AM hours
  "twelve",
  "one",
  "two",
  "three",
  "four",
  "five",
  "six",
  "seven",
  "eight",
  "nine",
  "ten",
  "eleven",

  // PM hours
  "twelve",
  "one",
  "two",
  "three",
  "four",
  "five",
  "six",
  "seven",
  "eight",
  "nine",
  "ten",
  "eleven"
};

/**
 * The string "$1" will be replaced with the current hour (e.g., "three"
 * at 3:45).  The string "$2" will be replaced with the *next* hour
 * (e.g., "four" at 3:45).
 *
 * A "*" character before a word makes that word bold.
 */
const char* const RELS_EN_US[] = {
  "*$1 o'clock",
  "five after *$1",
  "ten after *$1",
  "quarter after *$1",
  "twenty after *$1",
  "twenty five after *$1",
  "half past *$1",
  "twenty five to *$2",
  "twenty to *$2",
  "quarter to *$2",
  "ten to *$2",
  "five to *$2"
};

const char* const MONTHS_EN_US[] = {
  "jan",
  "feb",
  "mar",
  "apr",
  "may",
  "jun",
  "jul",
  "aug",
  "sep",
  "oct",
  "nov",
  "dec"
};

const char* const DAYS_EN_US[] = {
  "sun",
  "mon",
  "tue",
  "wed",
  "thu",
  "fri",
  "sat"
};

// Date format: $1 = day name, $2 = month name, $3 = date number (with suffix)
const char* const DATE_FORMAT_EN_US = "$1  $2 $3 ";

const char* const MINUTES_EN_US[60] = {
  "",             "oh one",      "oh two",      "oh three",
  "oh four",      "oh five",     "oh six",      "oh seven",
  "oh eight",     "oh nine",     "ten",         "eleven",
  "twelve",       "thirteen",    "fourteen",    "fifteen",
  "sixteen",      "seventeen",   "eighteen",    "nineteen",
  "twenty",       "twenty one",  "twenty two",  "twenty three",
  "twenty four",  "twenty five", "twenty six",  "twenty seven",
  "twenty eight", "twenty nine", "thirty",      "thirty one",
  "thirty two",   "thirty three","thirty four", "thirty five",
  "thirty six",   "thirty seven","thirty eight","thirty nine",
  "forty",        "forty one",   "forty two",   "forty three",
  "forty four",   "forty five",  "forty six",   "forty seven",
  "forty eight",  "forty nine",  "fifty",       "fifty one",
  "fifty two",    "fifty three", "fifty four",  "fifty five",
  "fifty six",    "fifty seven", "fifty eight", "fifty nine"
};

const char* date_suffix_EN_US(int date) { return ""; }
