#include <iostream>
using namespace std;
 int main()
{ 		
 	cout << "___________________________________________" << endl;
 	char gl;
 	cin>>gl;
	switch(gl)
	{
		case 'a':
		case 'o':
		case 'i':
		case 'e':
		case 'u':
		case 'y': cout << "vowel" << endl;
			break;
		default: cout << "consonant" << endl;		
	}
		 
	cout << "___________________________________________" << endl;
 	int wa;
 	int wb;
 	int wc;
 	cout<< "Input a = " ;
 	cin>>wa;
 	cout<< "Input b = " ;
 	cin>>wb;
 	cout<< "Input c = " ;
 	cin>>wc;
	if(wa>0 && wb>0 && wc>0 && wa+wb>wc && wa+wc>wb && wc+wb>wa)
	{
		cout << "Triangle with sides: EXIST" << endl;
	}
	else
	{
		cout<< "ERROR" <<endl;
	} 		
		
	cout << "___________________________________________" << endl;
		
	//int a, b, c;
	//cin>>a;
	//cin>>b;
	//cin>>c;
	//bool AllAreBiggerThan0 = (a>0 && b>0 && c>0);
	//bool TwoSidesAreBiggerThanOne = (a+b>c && a+c>b && c+b>a);
	//if(AllAreBiggerThan0 && TwoSidesAreBiggerThanOne)
	// {
	//cout << "Triangle with sides: EXIST" << endl;
	// }
	//else
	//{
	//	cout<< "ERROR" <<endl;
	//}
	cout << "___________________________________________" << endl;
	int da, start, end;
	cout<< "Input a = " ;
	cin>>da;
	cout<< "Input b = ";
	cin>>start;
	cout<< "Input c = " ;
	cin>>end;
	//bool res = (a>=start && a<=end);
	//cout<< res <<endl;
	cout << "___________________________________________" << endl;
	int d;
	cin>>d;
	
	switch(d)
	{
		case 1: cout << "edno" << endl;
				break;
		case 2: cout << "dvoika " << endl;
				break;
		default: cout << "neshto drugo" <<endl;
	}
			
}

