#include <iostream>
using namespace std;
int main()
{
	int start, end,resSum = 0,ss,ee;
	cout<<"Enter start: ";cin>>start;
	cout<<"Enter end: ";cin>>end;
	ss = start<10 ? 10 : start;
	ee = end>99 ? 99 : end;
	
	for(int i = ss;i<=ee;i++)
	resSum += i%10 + i/10;
	cout<<resSum<<endl;
}
