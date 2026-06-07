#include "strings-nl.h"

const char* const HOURS_NL[] = {
  /* AM */
  "twaalf", "een", "twee", "drie", "vier", "vijf",
  "zes", "zeven", "acht", "negen", "tien", "elf",
  /* PM */
  "twaalf", "een", "twee", "drie", "vier", "vijf",
  "zes", "zeven", "acht", "negen", "tien", "elf"
};

/* $1 = current hour, $2 = next hour, * = bold */
const char* const RELS_NL[] = {
  "*$1 uur",
  "vijf over *$1",
  "tien over *$1",
  "kwart over *$1",
  "tien voor half *$2",
  "vijf voor half *$2",
  "half *$2",
  "vijf over half *$2",
  "tien over half *$2",
  "kwart voor *$2",
  "tien voor *$2",
  "vijf voor *$2"
};

const char* const MINUTES_NL[60] = {
  "",                "één",             "twee",            "drie",
  "vier",            "vijf",            "zes",             "zeven",
  "acht",            "negen",           "tien",            "elf",
  "twaalf",          "dertien",         "veertien",        "vijftien",
  "zestien",         "zeventien",       "achttien",        "negentien",
  "twintig",         "eenentwintig",    "tweeëntwintig",   "drieëntwintig",
  "vierentwintig",   "vijfentwintig",   "zesentwintig",    "zevenentwintig",
  "achtentwintig",   "negenentwintig",  "dertig",          "eenendertig",
  "tweeëndertig",    "drieëndertig",    "vierendertig",    "vijfendertig",
  "zesendertig",     "zevenendertig",   "achtendertig",    "negenendertig",
  "veertig",         "eenenveertig",    "tweeënveertig",   "drieënveertig",
  "vierenveertig",   "vijfenveertig",   "zesenveertig",    "zevenenveertig",
  "achtenveertig",   "negenenveertig",  "vijftig",         "eenenvijftig",
  "tweeënvijftig",   "drieënvijftig",   "vierenvijftig",   "vijfenvijftig",
  "zesenvijftig",    "zevenenvijftig",  "achtenvijftig",   "negenenvijftig"
};

const char* date_suffix_NL(int date) { return ""; }
