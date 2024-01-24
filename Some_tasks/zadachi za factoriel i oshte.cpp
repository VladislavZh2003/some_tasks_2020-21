#include <iostream>
using namespace std;
int main()
{
	int first;
	int last;
	int vremenna = 0;
	cout<< "Input initial number: "<<endl;
	cin>>first;
	cout<< "Input finite number: "<<endl;
	cin>>last;
	while(first <= last)
	{
		if(first % 2 == 0)
		{
			cout<< first << endl;
			vremenna += first;
		}
		first++;
	}
	cout<< vremenna<<endl;
	cout<<"_________________________________________________"<<endl;
	int fakn;
	int multin = 1;
	cout<<"Input one number: "<<endl;
	cin>>fakn;
	while(fakn > 0)
	{
		multin *=fakn;
		cout<<fakn<< " * ";
		fakn--;
	}
	cout<<" = "<<multin<<endl;
	cout<<"_________________________________________________"<<endl;
	
	int n, i=1, result =1;
	cout<<"n=";cin>>n;
	while(i<=n)
	{
		result *= i++;
		cout<<i-1<<" !n="<<result<<endl;
	}
	cout << endl;
}

