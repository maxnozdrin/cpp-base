#include "standards/cpp14.h"
#include "standards/cpp17.h"
#include "patterns/singleton.h"


int main()
{
	Singleton* ss = Singleton::getInstance();

	cpp14::foo();
	cpp14::tuple_by_type();
	cpp14::cbegin_cend();
	cpp14::m_unique();

	cpp17::new_func();

	return 0;
}