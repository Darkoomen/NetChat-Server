#pragma once

#pragma comment(lib, "ws2_32.lib")
#include <winsock2.h>
#include <iostream>

#define DEFAULT_PORT 7777
#define MESSAGE_LENGTH 1024

#pragma warning(disable: 4996)

class ServerC
{
	SOCKADDR_IN addr;
	SOCKET sListen;
	SOCKET newConnection;
	int sizeofaddr;
public:
	ServerC();
	int ServerConn();
};