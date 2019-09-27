#include <stdio.h>
int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=20;j++)
        {
            if((i+j>=8 && j<=11 && i<=8) || (i+j>=8 && i>8))
            printf("*");
            else printf("0");
        }
        printf("\n");
    }
}
