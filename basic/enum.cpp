#include <iostream>
#include <string>

using namespace std;

enum RESULTCODE { UNKNOWN, SUCCESS, KEYFAIL, CONNECTIONFAIL, BADREQUESTPARAMETER, BADREQUESTURL, SERVERFAIL_UNKNOWN, SERVERFAIL_IP_NULL, SERVERFAIL_DEVICE_TYPE_NULL };

static int result_code[] =
        { 1000,
        2000,
        3000,
        3100,
        3001,
        3002,
        5000,
        5000,
        5000};

static const char *result_message[] =
        { "unknown", 
        "success",
        "keyFail",
        "connectionFail(Full)", 
        "badRequestParameter", 
        "badRequestURL", 
        "serverFail(unknown)", 
        "serverFail(ip null)", 
        "serverFail(device type null)"};

int resultCode( int enum_val )
{
    int tmp(result_code[enum_val]);
    return tmp;
}

string resultMessage( int enum_val )
{
    string tmp(result_message[enum_val]);
    return tmp;
}

const char resultMessage2( int enum_val )
{
    const char tmp(result_message[enum_val]);
    return tmp;
}

int main(){
	cout << resultCode(UNKNOWN) << endl;
	cout << resultMessage(UNKNOWN) << endl;
	cout << resultCode(SERVERFAIL_UNKNOWN) << endl;
	cout << resultMessage(SERVERFAIL_UNKNOWN) << endl;
	cout << resultCode(SERVERFAIL_IP_NULL) << endl;
	cout << resultMessage(SERVERFAIL_IP_NULL) << endl;
	cout << resultCode(SERVERFAIL_DEVICE_TYPE_NULL) << endl;
	cout << resultMessage(SERVERFAIL_DEVICE_TYPE_NULL) << endl;
	return 0;
}