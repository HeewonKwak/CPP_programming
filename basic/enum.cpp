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

int getCodeForEnum( int enum_val )
{
    int tmp(result_code[enum_val]);
    return tmp;
}

string getMessageForEnum( int enum_val )
{
    string tmp(result_message[enum_val]);
    return tmp;
}

int main(){
	cout << getCodeForEnum(UNKNOWN) << endl;
	cout << getMessageForEnum(UNKNOWN) << endl;
	cout << getCodeForEnum(SERVERFAIL_UNKNOWN) << endl;
	cout << getMessageForEnum(SERVERFAIL_UNKNOWN) << endl;
	cout << getCodeForEnum(SERVERFAIL_IP_NULL) << endl;
	cout << getMessageForEnum(SERVERFAIL_IP_NULL) << endl;
	cout << getCodeForEnum(SERVERFAIL_DEVICE_TYPE_NULL) << endl;
	cout << getMessageForEnum(SERVERFAIL_DEVICE_TYPE_NULL) << endl;
	return 0;
}