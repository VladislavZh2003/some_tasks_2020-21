#include <iostream>
#include <bits/stdc++.h>

using namespace std;
 
char reverse(string str)
{ 
    char *word ;
    if(str.size() == 0)
    {
        return *word;
    }
    reverse(str.substr(1));
    word += str[0];

    
    
}
 int main()
{
   string a = "heyyy";
    char *ptr; 
    *ptr = reverse(a);
    for (int i = 0; i < 5; i++)
    {
        cout<<ptr[i];
    }
    
    return 0;
}