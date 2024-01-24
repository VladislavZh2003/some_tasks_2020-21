#include<iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

template <class T>void selectSort(T a[], int size);


int main()
{
	srand(time(NULL));
	int size = rand()%100;
	int arr[size];

	for(int i = 0; i<size; i++)
	{
		if(i == 0)
		{
			arr[i] = size;
			cout<<arr[i]<<'\t';
		}
		else if(i == 1)
		{
			arr[i] = rand()%2;
			cout<<arr[i]<<'\t';
		}
		else if(i == 2)
		{
			arr[i] = 1;
			cout<<arr[i]<<'\t';
		}
		else
		{
			arr[i] = rand()%100;
			cout<<arr[i]<<'\t';
		}
	}
	cout<<"\n\n";
	
	selectSort(arr,size);
	
	for(int i = 0;i<size; i++)
	{
		cout<<arr[i]<<'\t';
	}
}

template <class T>void selectSort(T a[], int size)
{
	int i, j, k;
	T x;
	if(a[1] == 0)//сортира възходящо
	{
		for(i=0;i<size;i++) 
		{
			k=i;
			x=a[i];
			for(j=i+1;j<size;j++)
			{
				if(a[j]<x)
				{
					k=j;
					x=a[j];				
					a[k]=a[i];
					a[i]=x;
				}
			}
		}
	}
	else if(a[1] == 1)//сортира низходящо
	{
		for(i=0;i<size;i++) 
		{
			k=i;
			x=a[i];
			for(j=i+1;j<size;j++)
			{
				if(a[j]>x)
				{
					k=j;
					x=a[j];				
					a[k]=a[i];
					a[i]=x;
				}
			}
		}
	}
	
}




