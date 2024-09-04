/* Copyright (C) 2024 Hong Kong University of Science and Technology

This repository is used for the Computer Networks (ELEC 3120) 
course taught at Hong Kong University of Science and Technology. 

No part of the project may be copied and/or distributed without 
the express permission of the course staff. Everyone is prohibited 
from releasing their forks in any public places. */
 
/* This file defines the API for the Foggy TCP implementation.
 */

#ifndef FOGGY_TCP_H_
#define FOGGY_TCP_H_

#include <netinet/in.h>
#include <pthread.h>
#include <stdint.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <time.h>
#include <deque>

#include "foggy_packet.h"
#include "grading.h"

using namespace std;

#define EXIT_SUCCESS 0
#define EXIT_ERROR -1
#define EXIT_FAILURE 1


typedef enum {
  TCP_INITIATOR = 0,
  TCP_LISTENER = 1,
} foggy_socket_type_t;

typedef struct {

} window_t;

/**
 * This structure holds the state of a socket. You may modify this structure as
 * you see fit to include any additional state you need for your implementation.
 */
struct foggy_socket_t {

};

/*
 * DO NOT CHANGE THE DECLARATIONS BELOW
 */

/**
 * Read mode flags supported by a FoggyTCP socket.
 */
typedef enum {
  NO_FLAG = 0,  // Default behavior: block indefinitely until data is available.
  NO_WAIT,      // Return immediately if no data is available.
  TIMEOUT,      // Block until data is available or the timeout is reached.
} foggy_read_mode_t;

/**
 * Constructs a FoggyTCP socket.
 *
 * An Initiator socket is used to connect to a Listener socket.
 *
 * @param sock The structure with the socket state. It will be initialized by
 *             this function.
 * @param socket_type Indicates the type of socket: Listener or Initiator.
 * @param port Port to either connect to, or bind to. (Based on socket_type.)
 * @param server_ip IP address of the server to connect to. (Only used if the
 *                 socket is an initiator.)
 *
 * @return 0 on success, -1 on error.
 */
void* foggy_socket(const foggy_socket_type_t socket_type,
               const char* port, const char* server_ip);

/**
 * Closes a CMU-TCP socket.
 *
 * @param sock The socket to close.
 *
 * @return 0 on success, -1 on error.
 */
int foggy_close(void* sock);

/**
 * Reads data from a CMU-TCP socket.
 *
 * If there is data available in the socket buffer, it is placed in the
 * destination buffer.
 *
 * @param sock The socket to read from.
 * @param buf The buffer to read into.
 * @param length The maximum number of bytes to read.
 * @param flags Flags that determine how the socket should wait for data. Check
 *             `foggy_read_mode_t` for more information. `TIMEOUT` is not
 *             implemented for CMU-TCP.
 *
 * @return The number of bytes read on success, -1 on error.
 */
int foggy_read(void* sock, void* buf, const int length);

/**
 * Writes data to a CMU-TCP socket.
 *
 * @param sock The socket to write to.
 * @param buf The data to write.
 * @param length The number of bytes to write.
 *
 * @return 0 on success, -1 on error.
 */
int foggy_write(void* sock, const void* buf, int length);

/*
 * You can declare more functions after this point if you need to.
 */

#endif  // FOGGY_TCP_H_
