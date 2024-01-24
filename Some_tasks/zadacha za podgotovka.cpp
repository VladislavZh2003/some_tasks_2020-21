#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

bool EvenAndPositiveInArr(int* arr, int size);
int SumOddNumbersInArray(int* arr, int size);
int IntInString(string str);
int SumOfFrac(double frac);

int main()
{
	int const sizeA = 9;
	int arrA[] = {1,2,4,6,-34,23,88,3,-23};
	
	if(EvenAndPositiveInArr(arrA,sizeA) == 1)
	cout<<"True"<<endl;
	else
	cout<<"False"<<endl;
	
	
	int const sizeB = 9;
	int arrB[] = {2,5,34,78,51,7,-3,-5,-12};
	
	cout<<SumOddNumbersInArray(arrB,sizeB)<<endl;
	
	
	string str = "dfrefesg8grgeage";
	cout<<IntInString(str)<<endl;
	
	
	double dnum;
	cout<<"Input double number: ";cin>>dnum;
	cout<<SumOfFrac(dnum)<<endl;
	
}

bool EvenAndPositiveInArr(int* arr, int size)
{
	int sum = 0;
	arr++;
	for(int i = 2; i<size; i+=2)
	{
		if(*arr >= 0)
		{
			arr+=2;
		}
		else
		{
			return false;
		}		
	}
	return true;
}

int SumOddNumbersInArray(int* arr, int size)
{
	int sum = 1;
	
	for(int i = 0; i<size; i++)
	{
		if(*arr%2 != 0)
		{
			sum *= *arr;
		}
		arr++;
	}
	return sum;
}

int IntInString(string str)
{
	// For atoi, the input string has to start with a digit, so lets search for the first digit
	int i = 0;
	for ( ; i < str.length(); i++ )
	{
		if ( isdigit(str[i]) )
		break;
	}
	// remove the first chars, which aren't digits
	str = str.substr(i, str.length() - i );
	// convert the remaining text to an integer
	int id = atoi(str.c_str());
	// print the result
	return id;
	
}

int SumOfFrac(double frac)
{
	int sum = 0;
	
	for(int i = 1;((int)frac%(10*i) - (int)frac%i)/i != 0; i*=10)
	{
		sum += ((int)frac%(10*i) - (int)frac%i)/i;
	}
	return sum;
}

