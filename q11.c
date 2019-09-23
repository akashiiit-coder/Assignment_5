#include <stdio.h>
int main()
{
    for(int i=0;i<=9;i++)
    {
        for(int j=1;j<=15;j++)
        {
            if(i%2==0)
            {
                if( (j <= i) ||  (j > (i+1) && (i+j)%2!=0 ) )
                {
                    printf("*");
                }
                if( (i+1==j) || (j > (i+1) && j%2==0) )
                {
                    printf("0");
                }
            }
            else 
            {
                if ( j <=i || (j >= i+1 && j%2!=0) )
                {
                    printf("0");
                }
                if( i+j>=2*i+1 && (i+j)%2==0 )
                {
                    printf("*");
                }
            }
        }
        printf("\n");
    }
}