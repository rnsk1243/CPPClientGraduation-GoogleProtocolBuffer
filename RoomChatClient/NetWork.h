#define _WINSOCK_DEPRECATED_NO_WARNINGS
#pragma once
#include<WinSock2.h>
#include"MySocket.h"

struct MessageStruct
{
	char* message = new char[BUF_SIZE];
	int* sendRecvSize = new int;
};

//struct StringStruct
//{
//	string id;
//	string pw;
//	StringStruct() {}
//	StringStruct(string id_, string pw_)
//	{
//		id = id_;
//		pw = pw_;
//	}
//	StringStruct& operator=(const StringStruct& idPw)
//	{
//		if (this == &idPw)
//			return *this;
//		id = idPw.id;
//		pw = idPw.pw;
//		return *this;
//	}
//};

struct RoomInfoStruct
{
	int roomNum;
	int roomPeopleNum;
};

class CNetWork
{
	MessageStruct* MS;
public:
	CNetWork();
	~CNetWork();
	int sendn(SOCKET * clientSocket, char* message, int flags = 0);
	int recvn(SOCKET* clientSocket, int flags = 0);
};

