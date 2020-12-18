#include<stdio.h>
int main()
{   
        long long D1,V1,D2,V2,P,count=0,i;
        scanf("%d %d %d %d %d",&D1,&V1,&D2,&V2,&P);

        for( i=1;i<1000;i++)
        {
            if(D1<=i)
            count+=V1;
            if(D2<=i)
            count+=V2;
            if(count>=P)
            break;
        }
          printf("%d\n",i);  
return 0;
}