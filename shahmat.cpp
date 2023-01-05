#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	int fx = 0;
	int fy = 0;
	
	cout << "Enter the horizontal coordinates of the first horse: ";
	cin >> x1; 
	cout << "Enter the vertical coordinates of the first horse: ";
	cin >> y1; 	
	cout << "Enter the horizontal coordinates of the second horse: ";
	cin >> x2; 	
	cout << "Enter the vertical coordinates of the second horse: ";
	cin >> y2; 
	
	if (x1 == x2 and y1 == y2)
	{
		cout << "Input Error" << endl;
	}
	else if (x1 <= 0 or x2 <= 0 or y1 <= 0 or y2 <=0 or x1 > 8 or x2 > 8 or y1 > 8 or y2 > 8)
	{
		cout << "Input Error" << endl;
	}
	else
	{
		fx = abs(x1 - x2);
		fy = abs(y1 - y2);
	
		if (fx == 2 and fy == 1 or fx == 1 and fy == 2)
			cout << "Horses hit each other";
		else 
			cout << "Horses do not attack each other";	
	}
		
	return 0;
}

