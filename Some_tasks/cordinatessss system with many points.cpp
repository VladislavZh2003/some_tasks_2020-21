#include <iostream>
using namespace std;

void PrintCordinates(int x[], int y[], int size);

int main()
{
	int size;
	cout<<"How many points you want: ";cin>>size;
	
	int xArr[size];
	int yArr[size];
	int x,y;
	
	if(size>0)
	{
		int i = 0;
		do
		{
			cout<<"Input X between -10 and 10: ";cin>>x;
			xArr[i] = x;
			cout<<"Input Y between -5 and 5: ";cin>>y;
			yArr[i] = y;
			i++;
		}while(i<size);	
	}
	
	PrintCordinates(xArr,yArr,size);
}

void PrintCordinates(int x[], int y[], int size)
{
	int xCor;
	int yCor;
	
	for(int i = 0; i<11; i++)
	{
		for(int j = 0; j<21; j++)
		{
			for(int xy = 0; xy<size; xy++)
			{
				xCor = x[xy]+10;
				yCor = y[xy]*(-1)+5;
				if(j==xCor && i==yCor)
				{
					cout<<"^";
				}
			}
			if(j==10 || i==5 || j==10 && i==5)
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

