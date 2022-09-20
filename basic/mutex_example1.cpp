// compile with this command: g++ -pthread -o mutex_example1 mutex_example1.cpp
#include <thread>
#include <mutex>
#include <iostream>
#include <string>
#include <vector>

#include <pthread.h>

void func(std::string message)
{
	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << "func : " << message << std::endl;
}

void func1(std::string message)
{
	static std::mutex m;
	m.lock();

	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << "func : " << message << std::endl;

	m.unlock();
}

void func2(std::string message)
{
	static std::mutex m;
	if (m.try_lock())
	{
		std::this_thread::sleep_for(std::chrono::seconds(1));
		std::cout << "func : " << message << std::endl;
		m.unlock();
	}
}

void func3(std::string message)
{
	static std::mutex m;
	std::scoped_lock lock(m);
	// std::lock_guard<std::mutex> guard(m);

	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << "func : " << message << std::endl;
}

int main()
{
	std::vector<std::thread> threads;
	threads.emplace_back(func1, "test1");
	threads.emplace_back(func1, "test2");
	threads.emplace_back(func1, "test3");
	threads.emplace_back(func1, "test4");
	threads.emplace_back(func1, "test5");

	for (auto &thread : threads)
		thread.join();

	return 0;
}