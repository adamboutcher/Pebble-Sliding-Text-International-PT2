#include "strings-en_GB.h"

const char* const HOURS_EN_GB[] = {
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
const char* const RELS_EN_GB[] = {
  "*$1 o'clock",
  "five past *$1",
  "ten past *$1",
  "quarter past *$1",
  "twenty past *$1",
  "twenty five past *$1",
  "half past *$1",
  "twenty five to *$2",
  "twenty to *$2",
  "quarter to *$2",
  "ten to *$2",
  "five to *$2"
};

const char* const MONTHS_EN_GB[] = {
  "jan", "feb", "mar", "apr", "may", "jun",
  "jul", "aug", "sep", "oct", "nov", "dec"
};

const char* const DAYS_EN_GB[] = {
  "sun", "mon", "tue", "wed", "thu", "fri", "sat"
};

// Date format: $1 = day name, $3 = date number (with suffix), $2 = month name
const char* const DATE_FORMAT_EN_GB = "$1  $3 $2 ";

const char* const MINUTES_EN_GB[60] = {
  "o'clock",      "one",         "two",         "three",
  "four",         "five",        "six",         "seven",
  "eight",        "nine",        "ten",         "eleven",
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

const char* date_suffix_EN_GB(int date) {
  int last_two = date % 100;
  if (last_two >= 11 && last_two <= 13) return "th";
  switch (date % 10) {
    case 1: return "st";
    case 2: return "nd";
    case 3: return "rd";
    default: return "th";
  }
}
