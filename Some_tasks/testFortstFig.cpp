#include <iostream>
using namespace std;

int main()
{
    char space = ' ';
    char dollar = '$';
    char hashtag = '#';

    int n = 0;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n*2; j++)
        {
            if(j>n-i-2 && i>=j-n)
            {
                if(i%2 == 0)
                    if(j%2 == 0)
                        cout<<hashtag;
                    else
                        cout<<space;
                else
                    if(j%2 != 0)
                        cout<<dollar;
                    else
                        cout<<space;
            }
            else              // very
                cout<<space;  // important
        }
        cout<<endl;
    }
    return 0;
}