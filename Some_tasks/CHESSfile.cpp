#include <iostream>
using namespace std;

//|--------|--------|--------|--------|--------|--------|--------|--------|
//|W  ^^   |W  #\   |W  ++   |W  !!   |W  ||   |W  ++   |W  #\   |W  ^^   |  /|
//|  |  |  |  /\ |~ |   ||   |  ()()  |  /\/\  |   ||   |  /\ |~ |  |  |  |   |
//| |||||| | /==\   | _====_ | &&&&&& | /\/\/\ | _====_ | /==\   | |||||| |  _|_  
//|--------|--------|--------|--------|--------|--------|--------|--------|
//|w  00   |w  00   |w  00   |w  00   |w  00   |w  00   |w  00   |w  00   |  |-\
//|   ||   |   ||   |   ||   |   ||   |   ||   |   ||   |   ||   |   ||   |    /
//|  /==\  |  /==\  |  /==\  |  /==\  |  /==\  |  /==\  |  /==\  |  /==\  |   /__
//|--------|--------|--------|--------|--------|--------|--------|--------|
//|        |        |        |        |        |        |        |        |  /^\
//|        |        |        |        |        |        |        |        |    /
//|        |        |        |        |        |        |        |        |  \_\
//|--------|--------|--------|--------|--------|--------|--------|--------|
//|        |        |        |        |        |        |        |        |  |  |
//|        |        |        |        |        |        |        |        |  |__|
//|        |        |        |        |        |        |        |        |     |
//|--------|--------|--------|--------|--------|--------|--------|--------|
//|        |        |        |        |        |        |        |        |  |^^^
//|        |        |        |        |        |        |        |        |  \--\
//|        |        |        |        |        |        |        |        |   __/
//|--------|--------|--------|--------|--------|--------|--------|--------|
//|        |        |        |        |        |        |        |        |  |^^^
//|        |        |        |        |        |        |        |        |  |--\
//|        |        |        |        |        |        |        |        |  |__|
//|--------|--------|--------|--------|--------|--------|--------|--------|
//|B  00   |B  00   |B  00   |B  00   |B  00   |B  00   |B  00   |B  00   |  ^^^/
//|   ||   |   ||   |   ||   |   ||   |   ||   |   ||   |   ||   |   ||   |    /
//|  /==\  |  /==\  |  /==\  |  /==\  |  /==\  |  /==\  |  /==\  |  /==\  |   /
//|--------|--------|--------|--------|--------|--------|--------|--------|
//|B  ^^   |B  #\   |B  ++   |B  !!   |B  ||   |B  ++   |B  #\   |B  ^^   |  |^^|
//|  |  |  |  /\ |~ |   ||   |  ()()  |  /\/\  |   ||   |  /\ |~ |  |  |  |  |--|
//| |||||| | /==\   | _====_ | &&&&&& | /\/\/\ | _====_ | /==\   | |||||| |  |__|
//|--------|--------|--------|--------|--------|--------|--------|--------|
//
//    /\      |^^)     /^^\     |^^\     |^^^     |^^^     /^^\     |  |
//   /--\     |--)    (         |   )    |---     |---    (  __     |--|
//  /    \    |__)     \__/     |__/     |___     |        \__/     |  |




//���������� �� �����
//���������� �� ������
//����� �� ���� �� ����� �������� � ��� ������
//�������� ���� �� �� ���� ���� � �����, ��� �� ������ ���, ���� �� �� �� �����

class ChessBoard
{
	public:
		void PrintBoard()
		{
			for (int i = 0; i<8*4+1; ++i)
			{
				for(int j = 0; j <9*8+1;++j)
				{
					if(j%9 == 0)
					{
						if(i%4 == 0)
						{
							cout<<"+";
						}
						else
						{
							cout<<"|";
						}
					
					}
					else if(i%4 == 0)
					{
						cout<<"-";
					}
					else
					{
						cout<<" ";
					}
				}
				cout << "\n";
			}
			cout<<"\n";
    		cout<<"    /\\      |^^)     /^^\\     |^^\\     |^^^     |^^^     /^^\\     |  |"<<endl;
	    	cout<<"   /--\\     |--)    (         |   )    |---     |---    (  __     |--|"<<endl;
			cout<<"  /    \\    |__)     \\__/     |__/     |___     |        \\__/     |  |"<<endl;
		}
		
		void Pawn_Print()
		{
			for(int i = 0; i<3; i++)
			{
				if(i == 0)
				cout<<"   00   "<<endl;
				else if(i == 1)
				cout<<"   ||   "<<endl;
				else
				cout<<"  /==\  "<<endl;
			}
		}
		void Rook_Print()
		{
			for(int i = 0; i<3; i++)
			{
				if(i == 0)
				cout<<"   ^^   "<<endl;
				else if(i == 1)
				cout<<"  |  |  "<<endl;
				else
				cout<<" |||||| "<<endl;
			}
		}
		void Officer_Print()
		{
			for(int i = 0; i<3; i++)
			{
				if(i == 0)
				cout<<"   ++   "<<endl;
				else if(i == 1)
				cout<<"   ||   "<<endl;
				else
				cout<<" _====_ "<<endl;
			}
		}
		void Horse_Print()
		{
			for(int i = 0; i<3; i++)
			{
				if(i == 0)
				cout<<"   #\   "<<endl;
				else if(i == 1)
				cout<<"  /\ |~ "<<endl;
				else
				cout<<" /==\   "<<endl;
			}
		}
		void King_Print()
		{
			for(int i = 0; i<3; i++)
			{
				if(i == 0)
				cout<<"   ||   "<<endl;
				else if(i == 1)
				cout<<"  /\/\  "<<endl;
				else
				cout<<" /\/\/\ "<<endl;
			}
		}
		void Queen_Print()
		{
			for(int i = 0; i<3; i++)
			{
				if(i == 0)
				cout<<"   !!   "<<endl;
				else if(i == 1)
				cout<<"  ()()  "<<endl;
				else
				cout<<" &&&&&& "<<endl;
			}
		}
};

class Figures : public ChessBoard
{
	
};


int main()
{
	for (int i = 0; i<8*4+1; ++i)
	{
		for(int j = 0; j <9*8+1;++j)
		{
			if(j%9 == 0)
			{
				if(i%4 == 0)
				{
					cout<<"+";
				}
				else
				{
					cout<<"|";
				}
			
			}
			else if(i%4 == 0)
			{
				cout<<"-";
			}
			else
			{
				cout<<" ";
			}
		}
		cout << "\n";
	}
}
