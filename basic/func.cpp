#include <iostream>

using namespace std;

static float get_addition_temp(float temp)
{
	return temp + temp * 2.5 / 12.3 - 3.08;
}

int main()
{
    float x = 20.1;
	float y;

	y = get_addition_temp(x);
	printf("%f\n", y);

	float z = 32.4;
	y = get_addition_temp(z);
	printf("%f\n", y);
	
    return 0;
}