#ifndef PARSE_H
#define PARSE_H
#include "lib/utils.h"

void error(size_t type);
String * mail();
String * rcpt();
String * data();
String * parse();
void save();

#endif