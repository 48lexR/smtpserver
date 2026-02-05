#include "lib/parse.h"
#include "lib/string.h"
#include "lib/vector.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

void error(size_t type){
    switch(type){
        case 250:
            puts("250 OK");
            break;
        case 354:
            puts("354 Begin data; end with <CRLF>.<CRLF>");
            break;
        case 500:
            puts("500 Syntax error: command unrecognized");
            break;
        case 501:
            puts("501 Syntax error in parameters or arguments");
            break;
    }
}

String * handleInput(){
    char line[LINE_SIZE];
    getline(&line, LINE_SIZE, stdin);
    String * s = initString(line, strlen(line));
    return s;
}


String * mail(String * line){
    int mailfrom = mailFromCmd(line);
}

String * rcpt(String * line){

}

String * data(String * line){

}

Letter * parse(String * line){
    Letter * letter = initNewLetter();
    String * line = handleInput();
    // mail parsing
    String * forwardPath = mail(line);
    letter->forward = forwardPath;
    destroyString(line);

    // rcpt parsing
    destroyLetter(letter);
}

void save(){

}
