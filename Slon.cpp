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
	
	cout << "Enter the horizontal coordinates of the first elephant: ";
	cin >> x1; 
	cout << "Enter the vertical coordinates of the first elephant: ";
	cin >> y1; 	
	cout << "Enter the horizontal coordinates of the second elephant: ";
	cin >> x2; 	
	cout << "Enter the vertical coordinates of the second elephant: ";
	cin >> y2; 
	
	if (x1 == x2 and y1 == y2)
	{
		cout << "Input Error. Elephants at the same point" << endl;
		return -1;
	}
	if (x1 <= 0 or x2 <= 0 or y1 <= 0 or y2 <=0 or x1 > 8 or x2 > 8 or y1 > 8 or y2 > 8)
	{
		cout << "Input Error. There are no such cells on the chessboard" << endl;
		return -2;
	}
	
	fx = abs(x1 - x2);
	fy = abs(y1 - y2);

	if (fx == fy)
		cout << "Elephants hit each other.";
	else 
		cout << "Elephants do not attack each other.";	
	
	return 0;
}

