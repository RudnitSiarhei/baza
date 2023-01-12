#include <iostream>

using namespace std;

void confirmationRotation (int number);
bool checkMoreThan1(int number);
bool checkLessThan1(int number);

int main()
{
	int number = 0;

	cout << "Enter a binary number using only 0 and 1: ";
	cin >> number;
	
	if (checkLessThan1(number) and checkMoreThan1(number))
	{
		confirmationRotation(number);
	}		
		
	return 0;
}

void confirmationRotation (int number)
{
	int digitFromNumber = 0;
	int pastNumber = 0;
	bool fn = true;
	
	while (number > 0)
	{
		digitFromNumber = number % 10;
		number = number / 10;
		if (pastNumber == digitFromNumber)
		{
			fn = false;
			break;
		}	
		pastNumber = digitFromNumber;
	}
	
	if (fn == true)
		cout << "Zeros and ones alternate in binary notation.";
	else
		cout << "Zeros and ones do NOT alternate in binary notation.";
}

bool checkMoreThan1(int number)
{
	int digitFromNumber = 0;
	int pastNumber = 0;
	
	while (number > 0)
	{
		digitFromNumber = number % 10;
		if (digitFromNumber > 1)
		{
			cout << "Error! You entered a number greater than 1.";
			return false;
		}
		number = number / 10;
	}
	return true;
}

bool checkLessThan1(int number)
{
	if (number < 0)
	{
		cout << "Error! You entered a negative number.";
		return false;
	}
	return true;
}
