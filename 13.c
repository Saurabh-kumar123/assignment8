#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=7;i++)
    {
        for(j=1,k='A';j<=13;j++)
        {
            if(j>=9-i&&j<=5+i)
            printf(" ");
            else
            {
                if(j<=7)
                {
                  printf("%c",k++);
                if(j==7)
                k--;
                }
                else
                  printf("%c",--k);
                  
            }
        }
        printf("\n");
    }
    return 0;
}
