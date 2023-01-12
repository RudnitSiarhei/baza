#include <iostream>

using namespace std;

void fibonacci(int n);

int main()
{
	fibonacci(9);
}

void fibonacci(int n)
{
   float number1 = 0;
   float number2 = 1;
   float i = 0;
   float sum = 0;
     
   while (i < n-1)
   {
   	sum = number1 + number2;
   	number1 = number2;
   	number2 = sum;
   	i++;
   }
   cout << number1;
}
