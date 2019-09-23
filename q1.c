#include <stdio.h>
int main()
{
    int x,y,z=1;
    for(y=0;y<=4;y++)
    {
       if((y%2==0)) 
        for(x=0;x<20;x++)
            {
                
                printf("*");
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