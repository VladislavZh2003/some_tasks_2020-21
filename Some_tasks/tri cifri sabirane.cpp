#include <iostream>
using namespace std;
 int main()
	{
		int a, b, c, d;
		cout << "Input three-dagit number: " << endl;
		cin>>a;
		if(a > 99 && a < 1000)
		{
			b = a / 100;
			c = a / 10 - b * 10;
			d = a - (b * 100 + c * 10);
			cout<< b << " + " << c << " + " << d << " = " << b+c+d <<endl;
		}
		else
		{
			cout << "ERROR" << endl;
		}
	}
