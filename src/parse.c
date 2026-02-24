#include "lib/parse.h"
#include "lib/string.h"
#include "lib/vector.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

char * error(size_t type){
    switch(type){
	case 220:
		return "220 ";
	case 221:
		return "221 closing connection";
        case 250:
        	return "250 OK";
        case 354:
            	return "354 Begin DATA; End with <CR><LF>.<CR><LF>";
        case 500:
            	return "500 Syntax error: command unrecognized";
        case 501:
            	return "501 Syntax error in parameters or arguments";
	case 503:
	    	return "503 Bad order of commands.";
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
