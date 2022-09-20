#include <thread>
#include <mutex>
#include <iostream>

void func()
{
	static std::mutex m;

	// Ex1
	m.lock();
	// working~
	m.unlock();

	// Ex2
	if(m.try_lock())
	{
		// working~
		m.unlock();
	}
	else
	{
		// lock fail
		printf("lock fail\n");
	}
}