#include<stdio.h>
int main()
{
    int i,j,m;
    for(i=1;i<=9;i++)
    {
        m=1;
        for(j=1;j<=9;j++)
        {
            if(i%2==0)
            for(j=1;j<=9;j++)
            printf(" ");
            
            if(j<=i&&m)
           {
            if((i==5&&j==3)||(i==7&&j==3)||(i==7&&j==5))
            printf(" ");
            else
             printf("*");
             m=0;
           }
             else
            {
                 printf(" ");
                 m=1;
            }
        }
        
        printf("\n");
    }
    return 0;
}