#include <iostream>
using namespace std;

int Grit_paths(int n, int m);
//https://www.youtube.com/watch?v=ngCos392W4w
int Count_partitions(int n, int m);

int main()
{
	cout<<Grit_paths(3,3)<<endl;
	cout<<Count_partitions(9,5)<<endl;
}

int Grit_paths(int n, int m)
{
	if(n == 1 || m == 1)
	return 1;
	else
	return Grit_paths(n,m-1) + Grit_paths(n-1,m);
}

int Count_partitions(int n, int m)
{
	if(n == 0)
	return 1;
	else if(m == 0 || n < 0)
	return 0;
	else
	return Count_partitions(n-m,m) + Count_partitions(n,m-1);
}

