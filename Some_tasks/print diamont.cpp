#include <iostream>
using namespace std;

void printDiamont(int num);

int main()
{
	int row;
	cout<<"How row you want in your diamont: ";cin>>row;
	printDiamont(row);
}

void printDiamont(int num)
{
	for(int i = 0; i<num; i++)
	{
		for(int j = 0; j<num*2+1; j++)
		{
			if(j >= i+1 && j <= num*2-i-1 && j <= num+i && j >= num-i )
			cout<<" *";
			//else if(j == 0 || j == num*2)//if you want to see borders, uncomment theese else if and cout
			//cout<<" ^";
			else
			cout<<"  ";
		}
		cout<<endl;
	}
}

