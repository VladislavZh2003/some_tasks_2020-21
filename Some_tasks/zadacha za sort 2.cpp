#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int LinearSearch (int array[], int size);
int BottomLinearSearch (int array[], int size);
template <class T>void insertSort(T ar[], int a, int b);

int main()
{
	srand(time(NULL));
	const int size = 40;
	int arr[size];
	
	for(int i = 0; i<size; i++)
	{
		arr[i] = rand()%41-20;
		cout<<arr[i]<<'\t';
	}
	cout<<"\n\n";
	int a = LinearSearch(arr,size);
	int b = BottomLinearSearch(arr,size);
	
	insertSort(arr,a,b);
	
	for(int i = 0; i<size; i++)
	{
		cout<<arr[i]<<'\t';
	}
	cout<<"\n\n";
}

int LinearSearch (int array[], int size)
{ 
	for(int i=0;i<size;i++)
	{
		if(array[i] < 0)
		{
			return i;
		}
	}
	return -1;
}

int BottomLinearSearch (int array[], int size)
{ 
	for(int i = size-1; i >= 0; i--)
	{
		if(array[i] < 0)
		{
			return i;
		}
	}
	return -1;
}

template <class T>void insertSort(T ar[], int a, int b)
{
	T x;
	int i, j;
	
	for(i=a;i<b+1;i++)
	{
		x=ar[i];
		
		for(j=i-1;j>=a&&ar[j]>x;j--)
		{
			ar[j+1]=ar[j];
		}
		ar[j+1] = x;
	}
}


