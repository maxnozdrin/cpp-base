// ќдиночка Ч это порождающий паттерн, который гарантирует существование только одного объекта определЄнного класса,
// а также позвол€ет достучатьс€ до этого объекта из любого места программы

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
