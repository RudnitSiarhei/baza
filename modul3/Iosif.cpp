#include <iostream>

using namespace std;

const int N = 41;

void fillingArray (int soliders[], int N);
void printArray (int soliders[], int N);
void printSurvivor (int soliders[], int N);

int main() 
{
	int D = 16;
	int count = 0;
	int dead = 1;
	int soliders[N] = {0};
	int i = 0;
	
	fillingArray (soliders, N);
	printArray (soliders, N);
	
	while (true)
	{
		if (soliders[i] != 0)	
		{
			count++;
			if (count == D)
			{
				dead++;
				soliders[i]=0;
				if (dead == N)
				{
					break;
				}	
				count = 0;
			}
	    }
	    i++;
	    if (i == N)
	    {
	    	i = 0;	
	    }
	}
	
	printSurvivor (soliders, N);

	return 0;
}

void fillingArray (int soliders[], int N)
{
	for (int i = 0; i < N; i++)
	{
		soliders[i] = i + 1;
	}
}

void printArray (int soliders[], int N)
{
	cout << "Number of soldiers: " << endl; 
	
	for (int i = 0; i < N; i++)
	{
		cout << soliders[i] << " ";
	}
}

void printSurvivor (int soliders[], int N)
{
	for (int i = 0; i < N; i++)
	{
		if (soliders[i] != 0)
			cout << endl << endl << "The person numbered " << soliders[i] << " will survive.";
	}
}
