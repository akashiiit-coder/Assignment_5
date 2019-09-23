#include <stdio.h>
int main()
{
    int x,y,n,t;
    printf("Enter thr number of lines you wanna print");
    scanf("%d",&n);
    for(y=0;y<n;y++)
    {
       t=0;
       if(!(y%2==0)) 
        for(x=1;x<=20;x++)
            {   
                if(x==(5*t+1))
                {
                    printf("*");
                    t++;
                }
                else printf("0");
            }
            else
           for(x=1;x<=20;x++)
            {   
                if(x==(5*t+1))
                {
                    printf("0");
                    t++;
                }
                else printf("*");
            }
      printf("\n")  ;    
    }
}