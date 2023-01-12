#include <iostream>

using namespace std;

int main() 
{

	int t = 1;
	int i = 1;

	while (t <=10)
	{
		while (i <= 10)
		{
			cout << t * i << "\t "; 
			i++;
		}
		i = 1;
		t++;
		cout << endl;
	}
	return 0;
}
