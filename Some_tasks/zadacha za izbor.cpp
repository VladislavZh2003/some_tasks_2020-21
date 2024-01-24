#include<iostream>
using namespace std;
int main()
{
	int choise, choise_sub;
	do{
		cout<<"Main menu (please make oyur choise)"<<endl;
		cout<<"1.Animals"<<endl;
		cout<<"2.Birds"<<endl;
		cout<<"3.EXIT"<<endl;
		cout<<"Make your choise: ";cin>>choise;
		switch(choise)
		{
			case 1:
				do{
					system("claer");//izchistva prednite redove
					cout<<"Sub Menu \"ANIMALS\""<<endl;
					cout<<"1. Dog"<<endl;
					cout<<"2. Cat"<<endl;
					cout<<"3. Exit to Main Menu"<<endl;
					cout<<"Make your choise: ";cin>>choise_sub;
					switch(choise_sub)
					{
					case 1:
						cout<<"The dog barks!!!"<<endl;
						break;
					case 2:
						cout<<"The cat is afraid of dogs!!!"<<endl;
						break;
					case 3:
						break;
					default:
						cout<<"Illegal chiose made! Make your selection again"<<endl; 
						break;
					}
				}while(choise_sub != 3);
				break;
			case 2:
				do{
					cout<<"Sub Menu \"BIRDS\""<<endl;
					cout<<"1. Eagle"<<endl;
					cout<<"2. Chicken"<<endl;
					cout<<"3. Exit to Main Menu"<<endl;
					cout<<"Make your choise: ";cin>>choise_sub;
					switch(choise_sub)
					{
						case 1:
							cout<<"The eagle is fast!"<<endl;
							break;
						case 2:
							cout<<"The chicken can not fly!"<<endl;
							break;
						case 3:
							break;
						default:
							cout << "Illegal choice made! Make your selectio again!" << endl;
							break;
					}
				}while(choise_sub != 3);
				break;
			case 3:cout<<"Exiting Program..."<<endl;
				break;
			default:
				cout << "Illegal choice made! Make your selectio again!" << endl;
				break;
		}
	}while(choise != 3);
}
