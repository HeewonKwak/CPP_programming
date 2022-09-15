#include <stdio.h>
#include "extern_number.cpp"

extern int number;

int main()
{
	printf("%d\n", number);

	return 0;
}