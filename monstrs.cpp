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
	
	cout << "Number of mutants: ";
	cin >> m;
	cout << "Reproduction of munains: ";
	cin >> s;
	cout << "Utilities destroy mutants: ";
	cin >> n;
	
	p = s * 0.01;
	
	while (m > 0)
	{
		l = p * m;
		m = m + l - n;
		i++;
		if (i == 100)
		{
			b = false;
			cout << "The workers won't be able to cope, a 100 days have already passed. ";
			break;
		}
	}		
	if (b == true)
		cout << "After " << i << " days, the workers will celebrate the victory. ";
	
	return 0;
}
