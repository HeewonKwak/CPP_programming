#include <string>
using std::string;

bool check_string_values(string data_keys[], int len)
{
	for (int i=0; i<len; i++)
	{
		printf("%s\n", data_keys[i].c_str());
	}
	return true;
}

int main()
{
	string keys[] = {"12", "213", "dfsfsd"};
	int numberofelements = sizeof(keys)/sizeof(keys[0]);
	check_string_values(keys, numberofelements);
}