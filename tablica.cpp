#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
	for (int i = 1; i <= 10; i++)
	{
		for (int t = 1; t <= 10; t++)
		{
			cout << setw(3) << i * t << " ";
		}
		cout << endl;
	}
		
	return 0;
}
