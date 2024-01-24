#include <iostream>
using namespace std;

double SumOfArray(double arr[],int size);

int main()
{
	const int size = 8;
	double arr[8];
	for(int i = 0; i<size; i++)
	{
		cout<<"Input "<<i+1<<". item: ";cin>>arr[i];
		
	}
	
	cout<<SumOfArray(arr,size)<<endl;
	
	return 0;
}

double SumOfArray(double arr[],int size)
{
	double sum = 0;
	int counter = 0;
	
	for(int i = 0; i<size; i++)
	{
		sum += arr[i];
		if(arr[i] != 0)
		counter++;
	}
	return sum/counter;
}

