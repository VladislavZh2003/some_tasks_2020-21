#include<iostream>
using namespace std;
int main()
{
	double zd=0;
	for(double i = 1;i <= 100; i++)
	{
		zd += i/(i+1);
	}
	cout<<zd<<endl;
	
	/*
	for(int i = 1;i <= 100; i++)
	{
		cout<<" "<<i<<" "<<endl;
		if(i<10)
		{
		cout<<"---"<<endl;
		cout<<i<<"+"<<"1"<<endl;
		}
		else if(i<100)
		{
		cout<<"----"<<endl;
		cout<<i<<"+"<<"1"<<endl;
		}
		else
		{
		cout<<"-----"<<endl;
		cout<<i<<"+"<<"1"<<endl;
		}
		cout<<"_____"<<endl;
	}
	*/
}
