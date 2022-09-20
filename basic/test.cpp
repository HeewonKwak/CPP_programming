#include "external/jsoncpp/json/json.h"
#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

// struct ResultCode
// {
//     enum {
// 		UNKNOWN 
// 	};
// };

// class ResultCode
// {
// private:
//    Json::Value UNKNOWN()
//    {
//       const int code = 1000;
//       const char* message = "unknown";
//    };

//     Json::Value SUCCESS()
//    {
//       const int code = 1000;
//       const char* message = "unknown";
//    };


// };

const char* create_auth_key(const char* clientIp, const char* body)
{
   std::string s = clientIp;
   std::string delimiter = ".";

   size_t pos = 0;
   std::string token;
   while ((pos = s.find(delimiter)) != std::string::npos) {
      token = s.substr(0, pos);
      // std::cout << token << std::endl;
      s.erase(0, pos + delimiter.length());
   }
   if (s == "1");
      s = "15";
   string authKeyRandom = "";
   int num1 = 49;
   int num2 = stoi(s);
   int num3 = num1 + num2;
   // std::cout << s << std::endl;
   // std::cout << s[1] << std::endl;
   // std::cout << s[2] << std::endl;
   // std::cout << s[3] << std::endl;
   // Json::Value root;
   // Json::CharReaderBuilder builder;
   // Json::CharReader* reader = builder.newCharReader();
   // reader->parse(body, body+strlen(body), &root, NULL);
   // delete reader;
   // const char* device_type = root["data"].get("device-type", 0).asString().c_str();
   // // printf("%s", device_type);
   // std::cout << device_type << std::endl;

   // std::string key = root.get("key", "").asString();
   // LOGD("key : %s\n", key.c_str());
   // LOGD("device-type : %s\n", root["data"].get("device-type", 0).asString().c_str());
   authKeyRandom = std::to_string(num3);
   std::string authkey = "WD" + s + authKeyRandom;

   // strcat(authkey, s.c_str());
   // strcat(authkey, authKeyRandom);
   // std::cout << authkey << std::endl;
   const char* result = authkey.c_str();
   return result;
}

void clear() {
    int temp;
    while ((temp = getchar()) != EOF && temp != '\n') {}
}

int main()
{
   // create_auth_key("192.168.10.16", "{\"result\": 2000, \"message\": \"success\", \"time\": \"\", \"total\": 0, \"count\": 0, \"datalist\": [], \"data\": {\"auth-key\": \"WD10021\"}}");

   // char a[20];
	// char b[20];
	// scanf("%s", &a);
	// clear();
	// scanf("%[^\n]s", &b);
	// printf("%s, %s\n", a, b);

   // 배열 포인터: 배열을 가르키는 포인터
   // int arr[5] = {1,3,2,4,5};
   // int* ptr = arr;
   // for (int i =0;i<5;i++)
   // {
   //    printf("%d\n", ptr+i);
   // }
   // for (int i =0;i<5;i++)
   // {
   //    printf("%d\n", *(ptr+i));
   // }

   // 포인터 배열: 배열 안에 포인터들이 들어있는 것
   int* arr[10];
   int* a, b;
   int num = 10;
   int value[5] = { 12,124,20,50,100 };
   a = &num;
   b = *value;
   arr[0] = a;
   arr[1] = &b;
   printf("arr[0]: %d\n", *arr[0]);
   for (int i=0;i<5;i++){
      printf("%d\n", (b+i));
   }
   for (int i =0; i<5;i++){
      printf("%d\n", *(arr[1]+i));
   }
   for (int i=0;i<5;i++){
      printf("%d\n", (b+i));
   }



   return 0;
}
