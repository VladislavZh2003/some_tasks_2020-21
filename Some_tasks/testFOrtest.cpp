#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int FillArr(int *arr, int size);
int Sort(int *arr, int size);
void swap(int *xp, int *yp);

int main()
{
    int n = 0;
    cin>>n;

    int nums[n];

    nums[n]= FillArr(nums, n);
    
    nums[n] = Sort(nums, n);

    for (int i = 0; i < n; i++)
    {
        cout<<nums[i]<<endl;
    }

    return 0; 
}

int FillArr(int *arr, int size)
{
    srand (time(NULL));
    int Rnum = 0;

    for (int i = 0; i < size; i++)
    {
        Rnum = rand();
        arr[i] = Rnum;
    }
    return *arr;
}

int Sort(int *arr, int size)
{
    int i, j, min;
    for (i = 0; i < size-1; i++)
    {
        min = i;
        for (j = i+1; j < size; j++)
        {
          if (arr[j] < arr[min])
              min = j;
        }
        if (min!=i)
            swap(&arr[min], &arr[i]);
    }

    return *arr;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}