#include<stdio.h>
int main()
{
    int i,j,m;
    for(i=1;i<=9;i++)
    {

        for(j=1;j<=9;j++)
        {
           if(i%2==0)
           {
                for(j=1;j<=9;j++)
               printf(" ");
           }
           else
            if(j>=10-i)
            {
              if(j>=11-i&&j<9&&i<=8)
                    printf(" ");
              else
             if(i==9&&(j==2||j==4||j==6||j==8))
                 printf(" ");
             else
               printf("*");
            }
             else
                 printf(" ");
        }

        printf("\n");
    }
    return 0;
}
