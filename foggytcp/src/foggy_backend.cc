/* Copyright (C) 2024 Hong Kong University of Science and Technology

This repository is used for the Computer Networks (ELEC 3120) 
course taught at Hong Kong University of Science and Technology. 

No part of the project may be copied and/or distributed without 
the express permission of the course staff. Everyone is prohibited 
from releasing their forks in any public places. */
 
 /*
 * This file implements the foggy-TCP backend. The backend runs in a different
 * thread and handles all the socket operations separately from the application.
 *
 * This is where most of your code should go. Feel free to modify any function
 * in this file.
 */



#include <assert.h>
#include <poll.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#include "foggy_backend.h"
#include "foggy_function.h"
#include "foggy_packet.h"
#include "foggy_tcp.h"

/**
 * Tells if a given sequence number has been acknowledged by the socket.
 *
 * @param sock The socket to check for acknowledgements.
 * @param seq Sequence number to check.
 *
 * @return 1 if the sequence number has been acknowledged, 0 otherwise.
 */
int has_been_acked(foggy_socket_t *sock, uint32_t seq) {}

/**
 * Checks if the socket received any data.
 *
 * It first peeks at the header to figure out the length of the packet and
 * then reads the entire packet.
 *
 * @param sock The socket used for receiving data on the connection.
 * @param flags Flags that determine how the socket should wait for data.
 * Check `foggy_read_mode_t` for more information.
 */
void check_for_pkt(foggy_socket_t *sock, foggy_read_mode_t flags) {}

void *begin_backend(void *in) {}
