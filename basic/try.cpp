#include <iostream>

#include <exception>
#include <typeinfo>
#include <stdexcept>
using namespace std;

int main(void)
{
	int a, b;
	try
	{
		cin >> a;
		cin >> b;

		// if (b <= 0)
		// {
		// 	throw b;
		// }

		cout << "계산 중" << endl;
		cout << "a : " << a << " , b: " << b << endl;
		cout << "a/b : " << a/b << endl;
		
	}
	// catch(int expn)
	// {
	// 	cout << "에러" << endl;
	// 	cout << "이상한 숫자 : " << expn << endl;
	// }
	// catch(const std::exception& ex)
	// {
	// 	cout << "에러1" << endl;
	// 	cout << "무슨 에러?" << endl;
	// 	std::exception_ptr p = std::current_exception();
    //     std::clog <<(p ? p.__cxa_exception_type()->name() : "null") << std::endl;
	// }
	catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	// catch(...)
	// {
	// 	cout << "에러3" << endl;
	// 	cout << "무슨 에러?" << endl;
	// 	std::exception_ptr p = std::current_exception();
    //     std::clog <<(p ? p.__cxa_exception_type()->name() : "null") << std::endl;
	// }

	return 0;
}