
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1,k=1;j<=9;j++)
        {
            if(j>=i&&j<=10-i)

               if(j>i&&j<10-i&&i>=2)

              printf(" ");
             else
             printf("*");

            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
