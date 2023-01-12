#include <iostream>

using namespace std;

int main() 
{
	for (int i = 1; i <= 10; i++)
	{
		for (int t = 1; t <= 10; t++)
		{
			cout << i * t << "\t";
		}
		cout << endl;
	}
		
	return 0;
}
