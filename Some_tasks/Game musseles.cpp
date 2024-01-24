#include <iostream>

int* GameMussels(int const _numberOfElephants, int _numberOfMusslesForEveryElephant[]);

int main()
{
	int numberOfElephants;
	
	int* pGmMs;
	
	std::cout<<"Input number of elephants(1 < n < 500): ";std::cin>>numberOfElephants;
	std::cout<<"Input musseles for every elephant(1 < n < 5000): "<<std::endl;
	
	int numberOfMusslesForEveryElephant [numberOfElephants];
	for(int i = 0; i<numberOfElephants; i++)
	{
		std::cin>>numberOfMusslesForEveryElephant[i];
		if(numberOfElephants<1 || numberOfElephants>500 ||
		numberOfMusslesForEveryElephant[i]<1 || numberOfMusslesForEveryElephant[i]>5000)
		{
			return 0;
		}
	}
	std::cout<<std::endl;
	
	pGmMs = GameMussels(numberOfElephants,numberOfMusslesForEveryElephant);
	
	std::cout<<*pGmMs<<std::endl;
	pGmMs++;
	for(int i = 1; i<numberOfElephants+1; i++,pGmMs++)
	{
		if(*pGmMs!=0)
		std::cout<<*pGmMs<<"\t";
	}
	
}

int* GameMussels(int const _numberOfElephants, int _numberOfMusslesForEveryElephant[])
{
	int* moveAndWinners = new int[_numberOfElephants+1];
	moveAndWinners[0] = 0;
	
	
	for(int i = 0; i<_numberOfElephants; i++)
	{
		int numberOfMoves = 0;
		while(true)
		{
			if(_numberOfMusslesForEveryElephant[i] == 1)
			{
				if(moveAndWinners[0] == numberOfMoves)
				{
					moveAndWinners[i+1] = i+1;
				}
				else if(moveAndWinners[0] < numberOfMoves)
				{
					moveAndWinners[0] = numberOfMoves;
					for(int clear = 1; clear<_numberOfElephants + 1; clear++)
					{
						moveAndWinners[clear] = 0;
					}
					moveAndWinners[i+1] = i+1;
				}
				
				break;
			}
			else if(_numberOfMusslesForEveryElephant[i]%3 == 0)
			{
				_numberOfMusslesForEveryElephant[i] /= 3;
				numberOfMoves++;
			}
			else if(_numberOfMusslesForEveryElephant[i]%2 == 0)
			{
				_numberOfMusslesForEveryElephant[i] /= 2;
				numberOfMoves++;
			}
			else
			{
				_numberOfMusslesForEveryElephant[i]++;
				numberOfMoves++;
			}	
			
		}
	}
	return moveAndWinners;
}

