#include "standards/cpp14.h"
#include "patterns/singleton.h"


int main()
{
	Singleton* ss = Singleton::getInstance();

	foo();
	tuple_by_type();
	cbegin_cend();
	m_unique();

	return 0;
}