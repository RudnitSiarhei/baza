#include <iostream>

using namespace std;

void confirmationRotation (int number);

int main()
{
	confirmationRotation(16);

	return 0;
}

void confirmationRotation (int number)
{
	int digitFromNumber = 0;
	int pastNumber = 0;
	bool fn = true;
	
	while (number > 0)
	{
		digitFromNumber = number % 2;
		number = number / 2;
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
