#include<iostream>
using namespace std;
int main() 
{
	float fracArr[5] = {12.3, 45.5, -12.61, 3.678,-125.785};
	for(int i = 0; i<5; i++) 
	{
		double sb = fracArr[i] - (int) fracArr[i];
		if(sb>=0.5) 
		{
			cout<<(int) fracArr[i] + 1<<endl;
		} 
		else if (sb-(sb*2)+0.5>=1) 
		{
			cout<< (int)fracArr[i]+1<<endl;
		} 
		else 
		{
			cout<< (int)fracArr[i]<<endl;
		}
		sb-=sb;
	}
}
