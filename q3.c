#include <stdio.h>
int main()
{
    int x,y,n;
    printf("Enter thr number of lines you wanna print");
    scanf("%d",&n);
    for(y=0;y<n;y++)
    {
       if((y%2==0)) 
        for(x=0;x<10;x++)
            {   
                printf("0*");
            }
            else
           {
                for(int j=0;j<10;j++)
                {
                    printf("*0");
                }
           }
      printf("\n")  ;    
    }
}