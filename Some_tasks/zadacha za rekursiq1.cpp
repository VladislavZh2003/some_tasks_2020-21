#include<iostream>
using namespace std;

void PrintArr(int arr[], int szArr, int start = 0);

void PrintOneZeroPosition(int position, int manus = 1);
void PrintOneZeroPositionVer2(int position, int sum = 0, int sum02 = 0, int minus = 0);
void PrintOneZeroPositionVer3(int position, int start = 0, int startG = 0, int center = 0);

int main()
{
	const int size = 5;
	int arr[size] = {1,2,3,4,5};
	PrintArr(arr,size);
	
	PrintOneZeroPosition(5);
	
	PrintOneZeroPositionVer2(6);
	
	PrintOneZeroPositionVer3(4);
}

void PrintArr(int arr[], int szArr, int start)
{
	if(start == szArr)
	{
		cout<<"\n\n";
		return;
	}
	else
	{
		cout<<arr[start]<<'\t';
		return PrintArr(arr,szArr,start + 1);
	}
}

void PrintOneZeroPosition(int position, int manus)
{	
	
	
	int sum = 1;
	for(int i = 0;i<position; i++)
	{
		sum *= 2;
	}
	sum -= manus;
	
	if(sum >= 0)
	{
	
		int arr[position];
		
		for(int i = 0; i<position; i++)
		{
			arr[i] = sum%2;
			cout<<arr[i]<<" ";
			sum /= 2;
		}
		cout<<endl;
		return  PrintOneZeroPosition(position,manus + 1);
	}
	cout<<"\n\n";
	return;
}

void PrintOneZeroPositionVer2(int position, int sum, int sum02, int minus)
{	
	int plusP = position;
	int plusSum = 1;
	plusP -= minus;

	
	for(int i = 0;i<position; i++)
	{
		plusSum *= 2;
	}

	if(sum < plusSum)
	{
	
		int arr[position];
		
		if(plusP>0)
		{
			arr[plusP-1] = sum02%2;
			cout<<arr[plusP-1]<<" ";
			return PrintOneZeroPositionVer2(position,sum,sum02/2,minus + 1);
		}

		cout<<endl;
		return  PrintOneZeroPositionVer2(position,sum + 1,sum02 + sum + 1);
	}
	cout<<"\n\n";
	return;
}

void PrintOneZeroPositionVer3(int position, int start, int startG, int center)
{
	int sum = 2;
	
	for(int i = 0;i<position-1; i++)
	{
		sum *= 2;
	}
	center = sum/2;
	if(start<position)
	{
		if(startG < sum)
		{	
			if(startG >= center  )
			cout<<1<<" ";
			else
			cout<<0<<" ";
			return PrintOneZeroPositionVer3(position,start, startG + 1,center);
		}
		cout<<endl;
		return PrintOneZeroPositionVer3(position,start+ 1,startG = 0, center);
	}
	cout<<"\n\n";
	return;
	
}


