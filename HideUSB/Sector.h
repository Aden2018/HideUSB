#pragma once
#include "Standard.h"

class Sector
{

public:

	char buffer[512];

public:

	//���� �ϵ� ��ũ�� �а� ���� �Լ�
	void readSector(int _nSect);
	void writeSector(int _nSect);

	//���α׷� ������ ���� ����� Sector�� ������ ��ȯ
	char* getBuffer() { return buffer; }
	void setBuffer(char *Buffer, int n) { memcpy(buffer, Buffer, n); }
	
};
