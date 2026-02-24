#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
#include "lib/string.h"
#include "lib/server.h"
#include "lib/string.h"
#include "lib/parse.h"

Server * initServer(String * hostname, int port){
	Server * s = malloc(sizeof(Server))
	s->hostname = hostname;
	s->port = port;
	s->state = 0;
	return s;
}

int callServer(Server * serv){
	while(1){
		switch(serv->state){
			case 0:
				// SMTP HANDSHAKE
			case 1:
				// MAIL FROM: command
			case 2:
				// RCPT TO: command

			case 3:
				// DATA command
		}
	}
}
