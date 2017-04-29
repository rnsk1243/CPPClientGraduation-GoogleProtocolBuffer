#include "NetWork.h"
#include"graduationWork.pb.h"
using namespace graduationWork;

CNetWork::CNetWork()
{
	MS = new MessageStruct();
}


CNetWork::~CNetWork()
{
}


int CNetWork::sendn(SOCKET * clientSocket, char* message,  int flags)
{
	
	if (message == nullptr)
		return -1;

	Message g_MS;
	g_MS.set_message(message);

	int temp = 0;
	int size = g_MS.ByteSize();
	char sendMessage[BUF_SIZE];
	//cout << "보낼 메세지 = " << message << endl;
	//cout << "보낼 사이즈 = " << size << endl;
	g_MS.SerializeToArray(sendMessage, BUF_SIZE);
	int xxx = send(*clientSocket, (char*)&size, INT, flags);
	while (true)
	{
		temp += send(*clientSocket, sendMessage, size, flags);
		if (temp >= size)
			break;
	}
	cout << "보낸 메세지 = " << g_MS.message() << endl;
	return 1;
}

int CNetWork::recvn(SOCKET * clientSocket, int flags)
{
	char temp[INT];
	char recvMessage[BUF_SIZE];
	int isSuccess = recv(*clientSocket, temp, INT, flags);
	//cout << "isSuccess = " << isSuccess << endl;
	if (isSuccess == SOCKET_ERROR)
	{
		cout << "ERROR" << endl;
		return SOCKET_ERROR;
	}
	// 값만 복사
	int left = *(int*)temp; 
	//cout << "left = " << left << endl;
	while (left > 0)
	{
		isSuccess = recv(*clientSocket, recvMessage, left, flags);
		//cout << "success = " << isSuccess << endl;
		if (isSuccess == SOCKET_ERROR)
		{
			cout << "ERROR" << endl;
			return SOCKET_ERROR;
		}
		else if (isSuccess >= left)
			break;
	}
	Message g_MS;
	g_MS.ParseFromArray(recvMessage, isSuccess);
	cout << g_MS.message() << endl;

	return 1;
}
