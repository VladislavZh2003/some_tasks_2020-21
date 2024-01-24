#include <iostream>
using namespace std;

int counter = 0;

unsigned int ackermann(unsigned int m, unsigned int n) {
	counter++;
	
    if (m == 0) {
    	
        return n + 1;
    }
    if (n == 0) {
        return ackermann(m - 1, 1);
    }
    return ackermann(m - 1, ackermann(m, n - 1));
}

int main()
{
	cout<<ackermann(3,3)<<endl;
	cout<<counter<<endl;
}
