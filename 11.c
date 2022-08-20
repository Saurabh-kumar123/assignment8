#include<stdio.h>
int main()
{
    int i,j,m;
    char k;
    for(i=1;i<=5;i++)
    {   
        m=1;
        for(j=1,k='A';j<=17;j++)
        {
            if(j>=11-2*i&&j<=7+2*i&&m)
            {
             if(j<9)
              printf("%c",k++);
             else
             printf("%c",k--);
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