#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
 
char c[110];
 
int main()
{
    int m,n;
    while(cin>>n)
    {
        while(n--)
        {
            cin>>m>>c;
            int Max = 0;
            for(int i = 0; i < m; i++)
            {
                Max = max(Max, (int)c[i]);
            }
            printf("%d\n", Max - 'a' + 1);
        }
    }
    return 0;
}