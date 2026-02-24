#ifndef SERVER_H
#define SERVER_H

#include "lib/string.h"
#include "lib/parse.h"

typedef struct {
	String * hostname;
	int port;
	int state;
} Server;

Server * initServer(String * hostname, int port);

int callServer(Server * serv);

void destroyServer(Server * serv);

#endif
