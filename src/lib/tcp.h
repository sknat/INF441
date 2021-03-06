/* ################################################################################
					
					TCP Utility library for the Porc protocol
					
   ################################################################################*/

#ifndef MYTCP
#define MYTCP

#include "../config.h"

typedef struct MYSOCKET {
	uint32_t	ip;
	uint16_t	port;
} __attribute__((packed))	MYSOCKET;

/*
	connect_to_host - Try to connect to ip:port.

	Returns socket descriptor in case of success, NULL otherwise.
*/
int connect_to_host(uint32_t ip, uint16_t port);


/*
	create_listen_socket - Try to create a listening socket.
*/
int create_listen_socket(int port);


#endif

