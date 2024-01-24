#include<iostream>
using namespace std;

int** PaskalTriangleNums(unsigned size);
void PrintPaskalTriangle(int** arrNums, int size);
int** DeleteMemory(int** arrNums, int size);

int main()
{
	const int size = 11;
	
	int** PasNums = PaskalTriangleNums(size);
	
	PrintPaskalTriangle(PasNums,size);
	
	PasNums = DeleteMemory(PasNums,size);
}

int** PaskalTriangleNums(unsigned size)
{
	int** pasTri = 0;
	
	pasTri = new int*[size];
	
	
	for(int i = 0; i<size; i++)
	{
		pasTri[i] = new int[i+1];
		for(int j = 0; j <= i; j++)
		{	
			if(i == j || j == 0)
			pasTri[i][j] = 1;
			else
			pasTri[i][j] = pasTri[i-1][j-1] + pasTri[i-1][j];
		}
	}
	
	return pasTri;
}

void PrintPaskalTriangle(int** arrNums, int size)//https://upload.wikimedia.org/wikipedia/commons/4/4b/Pascal_triangle.svg
{
	int theBigNum = arrNums[size-1][size/2];
	int spaces = 1;

	while(true)
	{
		if(theBigNum/10 < 1)
			break;
		else
			spaces++;
		theBigNum /= 10;
	}
	
	for(int i = 0; i<size; i++)
	{
		for(int s = 0; s<size+spaces-i; s++)
			cout<<" ";
				
		for(int j = 0; j < size; j++)
		{
			if(j > i)
				cout<<"";
			else
			{
				cout<<" ";
				cout<<arrNums[i][j];
				cout<<" ";
			}

				
		}
		cout<<endl;
	}
}

int** DeleteMemory(int** arrNums, int size)
{
	printf("\n");
    printf("Cleaning up memory...\n");
    for (int h = 0; h < size; h++)
    {
    	delete [] arrNums[h];
    }
    delete [] arrNums;
    arrNums = 0;
    printf("Ready.\n");
    return arrNums;
}

