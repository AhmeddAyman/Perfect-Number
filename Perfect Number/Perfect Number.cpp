#include <iostream>
#include <string>
#include <cmath>

using namespace std;

//Solution #3 Perfect Number
//Course #5



int ReadPositiveNumber (string Message) 
{
	
	int Number = 0;

	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

bool isperfectNumber(int Number)
{
	int sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
			sum += i;
	}

	return Number == sum;
}


void PrintResults(int Number)
{
	if (isperfectNumber(Number))
		cout << Number << " is Perfct Number . \n";
	else
		cout << Number << " is Not Perfct Number . \n";

	
		
}


int main()
{
	
	PrintResults(ReadPositiveNumber("Please enter postitvie number"));
}

