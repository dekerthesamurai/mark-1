#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int T;  cin>>T;
     
    while(T--)
    {    long long a,b,x,y,i,c1,c2,count=0;
       
        cin>>a>>b;

        //for(i=1;i<=1000;i++)
        //{
            for (c1 = 1; c1<=a ; c1++)
            {
             for(c2 = 1; c2<=b; c2++)
            
                {
                     if ((c1+c2) % 2 == 0)
                    count++;
                 }
            }
       cout<<count<<"\n";
    }

return 0;
}