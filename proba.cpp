#include <iostream>

using namespace std;

int main() 
{
	int n = 42985;
	int i = 0;
	int max = 0;
	
	while (n > 0)
	{
		i = n % 10;
		cout << i << " " << endl;
		
		if (i > max)
		max = i;
		
		n = n / 10;
	}

	cout << endl << max;
	
	return 0;
}
