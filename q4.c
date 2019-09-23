#include <stdio.h>
int main()
{
    int x,y,n,p=1,q=1;
    printf("Enter thr number of lines you wanna print");
    scanf("%d",&n);
    for(y=0;y<n;y++)
    {
        p=q=0;
       if((y%2==0)) 
         for(x=0;x<20;x++)
            {   
                printf("0");
            }
            else
           {
                for(int j=1;j<=20;j++)
                   {
                        if (j%5==1 || j%3==1)
                        {
                        printf("*");
                        }

                    else
                    printf("0");
                   }
                }
           
      printf("\n")  ;    
    }
}
