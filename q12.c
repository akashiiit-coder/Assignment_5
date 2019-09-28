#include <stdio.h>
int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=20;j++)
        {
            if (i%2==0 && ((i<=5) || (i>5 && (j<5 || j>14))))
            printf("0");
            else 
            printf("*");
        }
        printf("\n");
    }
}