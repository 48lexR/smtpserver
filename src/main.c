#include "lib/parse.h"
#include "lib/utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINE_SIZE 256


int main(int argc, char** argv){
    char line[LINE_SIZE];
    while(1){
        String * t = parse(s);
        if(t->length > 1){
            save(t);
        }
        destroyString(s);
        destroyString(t);
    }

    return 0;
}