#include <iostream>
#include <cstdlib> // for std::and() and std::srand()
#include <ctime>   // for std::time()

// Generate a random number between min and max (inclusive)
// Assumes std::srand() has already been called
// Assumes max - min <= RAND_MAX
int getRandomNumber(int min, int max)
{
	std::srand(static_cast<unsigned int>(std::time(0)));
    static const double fraction = 1.0 / (RAND_MAX + 1.0);  // static used for efficiency, so we only calculate this value once
    // evenly distribute the random number across our range
    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

int main()
{
    int x;
	x = getRandomNumber(4, 9);

	printf("%d\n", x);
	
    return 0;
}

//출처: https://boycoding.tistory.com/192 [소년코딩:티스토리]