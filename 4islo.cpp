#include <iostream>

using namespace std;

int main() 
{
	int date = 0;
	int month = 0;
	int year = 0;
	int sum = 0;
	int n = 4;
	int i = 0;
	int j = 0;
	int k = 0;
	int w = 0;
	int l = 0;
	int m = 0;
	int b = 0;
	
	cout << "Enter your date of birth: ";
	cin >> date;
	if (date <= 0 or date > 31)
	{	
		cout << "Error! There is no such number in the month.";
		return -1;
	}
	cout << "Enter your month of birth: ";
	cin >> month;
	if (month <= 0 or month > 12)
	{	
		cout << "Error! There is no such month.";
		return -2;
	}
	cout << "Enter your year of birth: ";
	cin >> year;
	if (year <= 0)
	{	
		cout << "Error! The countdown will be from our era.";
		return -3;
	}
	
	i = date % 10;
	date = date / 10;	
	
	j = month % 10;
	month = month / 10;	
	
	for (n = 4; n > 0; n--)
	{
		k = year % 10;
		w = w + k;
		year = year / 10;	
	}

	sum = w + month + j + i + date;

	l = sum % 10;
	sum = sum / 10;	
	b = sum + l;
	
	m = b % 10;
	b = b / 10;	
	cout << "Number of your destiny: " << b + m << endl;
	
	return 0;
}

