#include <iostream>
#include <string>

using namespace std;

enum RESULTCODE { UNKNOWN, SUCCESS, KEYFAIL, CONNECTIONFAIL, BADREQUESTPARAMETER, BADREQUESTURL, SERVERFAIL_UNKNOWN, SERVERFAIL_IP_NULL, SERVERFAIL_DEVICE_TYPE_NULL };

void change_int(int* code)
{
	cout << *code << endl;

	*code = SUCCESS;

	cout << *code << endl;
}

int main(){
	int code;
	code = UNKNOWN;

	cout << code << endl;

	change_int(&code);

	cout << code << endl;
	return 0;
}