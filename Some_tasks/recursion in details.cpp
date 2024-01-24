#include<iostream>
#include <windows.h>
using namespace std;

void PrintArr(int *arr, int szArr);
void PrintVariationsVer2(int *a, int n, int start = 0);

int main()
{
	int a[3];
	
	PrintVariationsVer2(a, 3);
}

void PrintArr(int *arr, int szArr)
{
	for(int i = 0; i < szArr;i++,arr++)
	{
		cout<<*arr<<'\t';
	}
	cout<<"\n\n";
}

void PrintVariationsVer2(int *a, int n, int start)
{
	cout<<"...."<<"start"<<"..."<<endl;
    if(start == n)
	{
        PrintArr(a, n);
        return;
    }
	Sleep(10000);
    a[start]=0;
	cout<<"|"<<a[start]<<"|"<<start<<endl;
    PrintVariationsVer2(a, n, start + 1);
    Sleep(10000);
    a[start]=1;
	cout<<"|"<<a[start]<<"|"<<start<<endl;
    PrintVariationsVer2(a, n, start + 1);
    
}

