#include <iostream>

using namespace std;

int main() 
{
	double m = 0.0;
	double s = 0.0; 
	double n = 0.0; 
	double l = 0.0;
	double p = 0.0;
	int i = 0;
	bool b = true;
	int const LIMIT = 100;
	
	cout << "Number of mutants: ";
	cin >> m;
	if (m <= 0)
	{
		cout << "Error! Number of mutants must be positive.";
		return -1;
	}
	cout << "Reproduction of munains: ";
	cin >> s;
	if (s <= 0)
	{
		cout << "Error! Mutant breeding percentage must be positive.";
		return -2;
	}
	cout << "Utilities destroy mutants: ";
	cin >> n;
	if (n <= 0)
	{
		cout << "Error! The number of mutants destroyed by workers must be positive.";
		return -3;
	}
	
	p = s * 0.01;
	
	while (m > 0)
	{
		l = p * m;
		m = m + l - n;
		i++;
		if (i == LIMIT)
		{
			b = false;
			cout << "The workers won't be able to cope, a " << LIMIT << " days have already passed. ";
			break;
		}
	}		
	if (b == true)
		cout << "After " << i << " days, the workers will celebrate the victory. ";
	
	return 0;
}
