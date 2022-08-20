#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1,k=1;j<=7;j++)
        {
            if(j>=6-i&&j<=2+i)
            printf(" ");
            else
            {
                if(j<=4)
                {
                  printf("%d",k++);
                if(j==4)
                k--;
                }
                else
                  printf("%d",--k);
                  
            }
        }
        printf("\n");
    }
    return 0;
}
