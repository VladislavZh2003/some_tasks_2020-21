#include <iostream> 
#include <conio.h>
using namespace std;

const int maxN = 3;

void ClearScreen()
{
	clrscr();
}

class Board
{	
	
	char board [maxN][maxN] = {};
public:

bool SetAt(int x, int y, char value)
	{
		if((x > -1 && x < maxN) && (y > -1 && y < maxN) && !board[x][y])
		{
			board[x][y] = value;
			return true; 
		}
		else
		{
			return false;
		}
  	}
	
	void print()
	{	
		for (int i = 0, x = 0; i < 7; ++i)
		{
			for(int j = 0, y = 0; j < 13; ++j)
			{
				if(j%4 == 0)
				{
					cout<<"|";
				}
				else if(i%2 == 0)
				{
					cout<<"-";
				}
				else if(i%2 == 1)
				{
					if(j%2 == 1)
					{
						cout<<" ";
					}
					else
					{
						if(board[x][y])
						{
							cout<<board[x][y];
						}
						else
						{
							cout<<" ";
						}
						y++;
					}
				} 
			}
			if(i%2 == 1)
			{
				x++;
			} 
			cout<<endl;
		}
	}
	
	bool CheckWin(char symbol)
	{
		for(int i = 0; i<maxN; i++)
		{
			int j = 0;
			if(board[i][j] == symbol && board[i][j+1] == symbol && board[i][j+2] == symbol )
			{
				return true;
			}
			if(board[j][i] == symbol && board[j+1][i] == symbol && board[j+2][i] == symbol )
			{
				return true;
			}
			
		}
		
		if(board[0][0] == symbol && board[1][1] == symbol && board[2][2] == symbol )
		{
			return true;
		}
		else if(board[2][0] == symbol && board[1][1] == symbol && board[0][2] == symbol )
		{
			return true;
		}
		else
		{
			return false;
		}
		
		
	}

};



int main(){
	Board b;
	int player = 1;
	
	while(true){
		
		int x, y;
		char symbol;
		
		cout << "Please, enter your coordinates: ";
		cin>>x>>y;
		ClearScreen();
	
		symbol = player == 1 ? 'x':'o'; 

		
	  	if(b.SetAt(x-1,y-1,symbol))
	  	{
	  		b.print();
		}
		else
		{
			cout<<"User input is invalid!"<<endl;
			b.print();
			continue;
		}
		
		if(b.CheckWin(symbol))
		{
			cout<<"The winner is player "<<player<<endl;
			break;
		}
		
		player = player == 1 ? 2:1;
	}
  
	return 0;
}
