#include "cpp14.h"
#include <tuple>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

// бинарные (двоичные) литералы
void binary_literals()
{
	int a1 = 0b0010; // 0000 0010
	int a2 = 0B0101; // 0000 0101
}

// разделитель цифр
void digit_separators()
{
	int a1 = 1000'000'000;
	int a2 = 1'0'0'0;
}

// Атрибут [[deprecated]]
[[deprecated("use binary_literals")]]
void foo()
{
	digit_separators();
}

auto sum(int n) -> int
{
	if (n == 1)
		return n; // возвращаемое значение - int
	else
		return sum(n - 1) + n; // теперь можно вызывать рекурсивно
}

// доступ к элементам кортежа по типу
void tuple_by_type()
{
	std::tuple<std::string, int> tp("foo", 1);
	int a = get<int>(tp); // a = 1
	int b = get<1>(tp); // a = 1
}

// константные итераторы на начало и конец диапазона
void cbegin_cend()
{
	std::vector<int> v{ 0, 2, 4, 6, 8 };
	auto start = std::cbegin(v);
	auto end = std::cend(v);
}

// make_unique
void m_unique()
{
	std::unique_ptr<int> u = std::make_unique<int>(5);
	int a;
}