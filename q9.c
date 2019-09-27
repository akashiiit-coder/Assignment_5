#include <stdio.h>
int main()
{
    int t=-6;
    for(int i=1;i<=9;i++,t+=2)
    {
        for(int j=1;j<=20;j++)
        {
            if (i+j>=10 && i+j<=t+11)
            printf("0");
            else 
            printf("*");
        }
        printf("\n");
    }
}
