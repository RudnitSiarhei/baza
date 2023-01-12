#include <iostream>

using namespace std;

int main() 
{
	int date = 0;
	int month = 0;
	int year = 0;
	int number = 0;
	int sum = 0;
	
	cout << "Enter your birth number [1..31]:";
	cin >> date;
	if (date <= 0 or date > 31)
	{	
		cout << "Error! There is no such number in the month.";
		return -1;
	}
	cout << "Enter your month of birth [1..12]:";
	cin >> month;
	if (month <= 0 or month > 12)
	{	
		cout << "Error! There is no such month.";
		return -2;
	}
	cout << "Enter your year of birth [1900..2023]:";
	cin >> year;
	if (year <= 0)
	{	
		cout << "Error! The countdown will be from our era.";
		return -3;
	}
	
	int finaldate = date + month * 100 + year * 1000;
	
	do
	{
		sum = 0;
		while (finaldate > 0)
		{
			number = finaldate % 10;
			finaldate = finaldate / 10;
			sum = sum + number;
		}
	 	finaldate = sum;
	} while (sum > 9);
			
	cout << "Number of your destiny: " << sum << endl;
	
	return 0;
}




/*
	date1 = date % 10;
	date = date / 10;	
	
	month1 = month % 10;
	month1 = month / 10;	
	
	for (i = 4; i > 0; i--)
	{
		year1 = year % 10;
		sumyear = sumyear + year1;
		year = year / 10;	
	}

	sum = sumyear + month + month1 + date1 + date;

	semifinalnumber = sum % 10;
	sum = sum / 10;	
	finalnumber2 = sum + semifinalnumber;
	
	finalnumber = finalnumber2 % 10;
	finalnumber2 = finalnumber2 / 10;
	*/
