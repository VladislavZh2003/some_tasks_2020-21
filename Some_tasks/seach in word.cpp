#include <iostream>
#include <cstring>
    using namespace std;
    int main()
    { 
	    char a[]="hello world!";
	    char b[]="llo";
	    char *output = NULL;
		output = strstr (a,b);
		if(output)
		{
			printf(output);;
		}
	}
