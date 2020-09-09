#ifndef SINGLETON_H
#define SINGLETON_H

#include<mutex>

class Singleton
{
public:
	static Singleton* getInstance();
	Singleton(Singleton& other) = delete;
	void operator=(Singleton& other) = delete;

private:
	Singleton() {};
	~Singleton() {};

private:
	static Singleton* instance;
	static std::mutex mutex;
};

#endif // !SINGLETON_H