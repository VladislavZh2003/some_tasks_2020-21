#include <iostream>
using namespace std;

void printPiramydAndLine(int num);

int main()
{
	int row;
	cout<<"How row you want in your piramyd: ";cin>>row;
	printPiramydAndLine(row);
}

void printPiramydAndLine(int num)
{
	for(int i = 0; i<num; i++)
	{
		for(int j = 0; j<num*2+1; j++)
		{
			if(j <= num+i && j >= num-i  || j == i*2)
			cout<<" *";
			else if(j == 0 || j == num*2 || i == 0|| i == num-1)//if you want to see borders, uncomment theese else if and cout
			cout<<" ^";
			else
			cout<<"  ";
		}
		cout<<endl;
	}
}

