#include <stdio.h>
int main()
{
    int n,j;
    printf("Enter the number of lines you wanna print");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%10==1 || i%10==2 || i%10==3 )
        {
            for(j=0;j<20;j++)
            {
                if(j<8)
                printf("0");
                else
                printf("*");
            }
        }
        else if (i%10==0 || i%10==9 || i%10==8 )
        {
            for(j=0;j<20;j++)
            {
                if(j<15)
                printf("*");
                else
                printf("0");
            }
        }
    else
        {
            for(j=0;j<20;j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}