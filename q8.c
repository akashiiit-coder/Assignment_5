#include <stdio.h>
int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=20;j++)
        {
        if(i+j<=7 || i+j>=13)
        {
            printf("0");
        }
        else 
        printf("*");
      
        }
     printf("\n");
    }
}