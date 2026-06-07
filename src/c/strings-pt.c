#include "strings-pt.h"

const char* const HOURS_PT[] = {
  /* AM */
  "meia noite", "uma", "duas", "três",
  "quatro", "cinco", "seis", "sete",
  "oito", "nove", "dez", "onze",
  /* PM */
  "meio dia", "uma", "duas", "três",
  "quatro", "cinco", "seis", "sete",
  "oito", "nove", "dez", "onze"
};

/* $1 = current hour, $2 = next hour, * = bold */
const char* const RELS_PT[] = {
  "*$1 em ponto",
  "*$1 e cinco",
  "*$1 e dez",
  "*$1 e quinze",
  "*$1 e vinte",
  "*$1 e vinte e cinco",
  "*$1 e meia",
  "*$1 e trinta e cinco",
  "vinte pras *$2",
  "quinze pras *$2",
  "dez pras *$2",
  "cinco pras *$2"
};

const char* const MINUTES_PT[60] = {
  "em ponto",      "um",            "dois",          "três",
  "quatro",        "cinco",         "seis",          "sete",
  "oito",          "nove",          "dez",           "onze",
  "doze",          "treze",         "catorze",       "quinze",
  "dezasseis",     "dezassete",     "dezoito",       "dezanove",
  "vinte",         "vinte e um",    "vinte e dois",  "vinte e três",
  "vinte e quatro","vinte e cinco", "vinte e seis",  "vinte e sete",
  "vinte e oito",  "vinte e nove",  "trinta",        "trinta e um",
  "trinta e dois", "trinta e três", "trinta e quatro","trinta e cinco",
  "trinta e seis", "trinta e sete", "trinta e oito", "trinta e nove",
  "quarenta",      "quarenta e um", "quarenta e dois","quarenta e três",
  "quarenta e quatro","quarenta e cinco","quarenta e seis","quarenta e sete",
  "quarenta e oito","quarenta e nove","cinquenta",   "cinquenta e um",
  "cinquenta e dois","cinquenta e três","cinquenta e quatro","cinquenta e cinco",
  "cinquenta e seis","cinquenta e sete","cinquenta e oito","cinquenta e nove"
};

const char* date_suffix_PT(int date) { return ""; }
