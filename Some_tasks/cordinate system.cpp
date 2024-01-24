#include <iostream>
using namespace std;

void PrintCordinates(int x, int y);

int main()
{
	int x,y;
	cout<<"Input X between -10 and 10: ";cin>>x;
	cout<<"Input Y between -5 and 5: ";cin>>y;
	PrintCordinates(x,y);
}

void PrintCordinates(int x, int y)
{
	int xCor = x+10;
	int yCor = y*(-1)+5;
	
	for(int i = 0; i<11; i++)
	{
		for(int j = 0; j<21; j++)
		{
			if(j==xCor && i==yCor)
			{
				cout<<"^";
			}
			else if(j==10 || i==5 || j==10 && i==5)
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

