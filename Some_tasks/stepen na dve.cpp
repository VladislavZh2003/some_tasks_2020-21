#include<iostream>
using namespace std;

int main()
{
	int sumOf2 = 1;
	int sz;
	do
	{
		cin>>sz;
		if(sz == 0)
		{
		cout<<1<<endl;
		cout<<"\n";
		}
		
		else
		{
			for(int i = 0; i<sz;i++)
			{
				sumOf2 *= 2;
			}
			cout<<sumOf2<<endl;
			cout<<"\n";	
		}
		sumOf2 = 1;
	}while(1);
	
}
