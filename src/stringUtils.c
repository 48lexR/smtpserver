#include "lib/utils.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

String * initNewString(){
    String * s = malloc(sizeof(String));
    s->length = 0;
    s->buf = malloc(sizeof(char));
    return s;
}

String * initString(char * buf){
    if(!buf){
        perror("ERROR: buf is null.");
        return;
    }
    String * s = malloc(sizeof(String));
    s->length = strlen(buf);
    s->buf = buf;
    memcpy(s->buf, buf, s->length);
    return s;
}

void destroyString(String * s){
    free(s->buf);
    free(s);
}

void printString(String * s){
    size_t i = 0;
    while(i < s->length){
        putchar(s->buf[i++]);
    }
}

String * spliceString(String * s, size_t i, size_t j){
    String * t = initNewString();
    size_t k = 0;
    while(k < j-i){
        memcpy(t->buf+(k++), s->buf+(i++), 1);
    }
    return t;
}

char * getChars(String * s){
    return s->buf;
}

// TODO: Implement
// void insertChars(String * s, char * buf, size_t i){
//     if(!buf){
//         perror("ERROR: buf is null. Exiting.");
//         return;
//     }
//     if(!s){
//         perror("ERROR: s is null. Exiting.");
//         return;
//     }
//     size_t len = strlen(buf);
//     s->length += len;
//     s->buf = realloc(sizeof(char)*s->length);
//     for(size_t j = 0; j < len; j++){
//         memcpy(s->buf+j+i+len, s->buf+j+i, sizeof(char));
//         memcpy(s->buf+i+j, buf+j, sizeof(char));
//     }
// }