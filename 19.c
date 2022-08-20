
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=13;i++)
    {
        for(j=1;j<=19;j++)
        { if(i>=5)
           break;

           if(j>=4-i&&j<=16+i)
           {
               if(i==4)
                  {
                       if(j==7&&j<=12)

                      {
                           printf("MySirG");
                        continue;

                      }
                      else
                      {
                           if(j>14)
                          printf(" ");
                          else
                          printf("*");
                      }
                  }

                    else
               {
                    if(j>=7+i&&j<=13-i)
                 printf(" ");
                 else
                 printf("*");
               }
           }
            else
            printf(" ");
        }
        if(i>=5)
        {
        for(j=1;j<=19;j++)
        if(j>=i-3&&j<=23-i)
          printf("*");
        else
          printf(" ");
        }
        printf("\n");
    }
    return 0;
}
