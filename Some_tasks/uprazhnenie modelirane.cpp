#include <iostream>
using namespace std;
int main()
{
	int row, mean;
	
	cout<<"rows = "; cin>>row;
	mean = row*2-1;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<mean;j++)
		{
			if(j>=mean/2-i  && j<=mean/2+i )
			{
				cout<<"*";
			}
			else  
			{
				cout<<" ";
			}
		
		}
		cout<<endl;
	}
	
		
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<mean;j++)
		{
			if(j==mean/2-i || j==mean/2+i || i==row-1)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		
		}
		cout<<endl;
	}

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<row;j++)
		{
			if(j+i>row-2 )
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
			
		}
	cout<<endl;
	}
}
