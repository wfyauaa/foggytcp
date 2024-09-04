/* Copyright (C) 2024 Hong Kong University of Science and Technology

This repository is used for the Computer Networks (ELEC 3120) 
course taught at Hong Kong University of Science and Technology. 

No part of the project may be copied and/or distributed without 
the express permission of the course staff. Everyone is prohibited 
from releasing their forks in any public places. */
 
 /*
 * This file implements the high-level API for foggy-TCP sockets.
 */

#include "foggy_tcp.h"

#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

#include "foggy_backend.h"

void* foggy_socket(const foggy_socket_type_t socket_type,
               const char *server_port, const char *server_ip) {

}

int foggy_close(void *in_sock) {

}

int foggy_read(void* in_sock, void *buf, int length) {

}

int foggy_write(void *in_sock, const void *buf, int length) {

}
