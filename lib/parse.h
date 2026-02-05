#ifndef PARSE_H
#define PARSE_H
#include "lib/stringUtils.h"
#include "lib/vector.h"
#include <stddef.h>

typedef struct {
    String * s;
    char * pointer;
} Line;

void error(size_t type);
String * mail();
String * rcpt();
String * data();
String * parse();
void save();

#endif