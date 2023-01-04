#include <iostream>

using namespace std;

int main() 
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	
	cout << "Enter coordinates of the first rook number1: ";
	cin >> a; 
	cout << "Enter coordinates of the first rook number2: ";
	cin >> b; 	
	cout << "Enter second rook coordinates number1: ";
	cin >> c; 	
	cout << "Enter second rook coordinates number2: ";
	cin >> d; 
	
	if (a == c and b != d)
		cout << "Rooks hit each other";
	else if (a == c and b == d)
		cout << "Input Error";
	else if (a <= 0 or b <= 0 or c <= 0 or d <=0 or a > 8 or b > 8 or c > 8 or d > 8)
		cout << "Input Error";
	else
		cout << "Rooks do not attack each other";
		
	return 0;
}
