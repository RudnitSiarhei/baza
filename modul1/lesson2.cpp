#include <iostream>
#include <cmath> 
using namespace std;




	int main()
{
	int x = 1101;
	
    double i = 0;
	int z = 0;
	double b = 0;
	
	while (x > 0)
	{
		z = x % 10;
		b = b + z * pow(2, i);
		x = x / 10;
		i++;
	}
    
  
    cout << b;
    
    return 0;
}
