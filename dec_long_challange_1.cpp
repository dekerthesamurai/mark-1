#include<iostream>
using namespace std;
int main()
{
        long long d1,d2,v1,v2,p,ctr=0,i;
        // cout<<"Enter d1,v1,d2,v2,p\n";
        cin>>d1>>v1>>d2>>v2>>p;

        for(i=1;i<=1000;i++)
        {
            if(d1<=i)
            ctr+=v1;
            if(d2<=i)
            ctr+=v2;
            if(ctr>=p)
            break;
        }
        cout<<i<<"\n";
}