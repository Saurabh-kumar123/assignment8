#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1,k=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
           if(j<4)
             printf("%d",k++);
           else
           printf("%d",k--);

            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
