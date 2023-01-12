#include <iostream>

using namespace std;

void flipsNumber(int number);

int main()
{
    flipsNumber(1234);
     
	return 0;
}

void flipsNumber(int number)
{
	int flip = 0;
	
	while (number > 0)
	{
		flip = number % 10;
		number = number / 10;
		cout << flip;
	}
}
