#include <iostream>

using namespace std;

int main() 
{
	const int N = 8;
	double arr[N] = {171, 175, 178, 180, 182, 179, 176, 177};
	
	int result = 0;
	int max = 0;
	
	cout << "Height points invisible to the observer: ";
	
	for (int i = 1; i < N; i++)
	{
		result = arr[i] - arr[0];
		
		if (result > max)
			max = result;
		else 
			cout << arr[i] << " ";	
	}
	
	return 0;
}









/*
	const int N = 8;
	double arr[N] = {171, 175, 178, 180, 182, 179, 176, 177};
	int i = 0;
	int j = 0;

	
	for (i = 0; i < N; i++)
	{
		if (arr[i+1] < arr[i])
		{
			for (j = i+1; j < N; j++)
			{
				cout << arr[j] << " ";	
			}
			break;
		}
	}
*/

