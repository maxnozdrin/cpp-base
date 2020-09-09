// �������� � ��� ����������� �������, ������� ����������� ������������� ������ ������ ������� ������������ ������,
// � ����� ��������� ����������� �� ����� ������� �� ������ ����� ���������

#include "singleton.h"

Singleton* Singleton::instance = nullptr;
std::mutex Singleton::mutex;

Singleton* Singleton::getInstance()
{
	if (instance == nullptr)
	{
		std::lock_guard<std::mutex> lock(mutex);
		if (instance == nullptr)
			instance = new Singleton();
	}

	return instance;
}
