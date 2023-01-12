#include <iostream>
#include <cmath> 

using namespace std;

double conversionbinary(int number);

int main()
{
	cout << conversionbinary(10101);
	
	return 0;
}

double conversionbinary(int number)
{
	int digitFromNumber = 0;
	double i = 0.0;
	double decimalNumber = 0.0;
	
	while (number > 0)
	{
		digitFromNumber = number % 10;
		decimalNumber = decimalNumber + digitFromNumber * pow(2, i);
		number = number / 10;
		i++;
	}
	return decimalNumber;
}
