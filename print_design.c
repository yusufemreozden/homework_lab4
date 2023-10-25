/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Print Design                                                             */
/*                                                                            */
/*   By: Yusuf Emre OZDEN | <yusufemreozdenn@gmail.com>                       */
/*                                                                            */      
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main() 
{
    int i,j,k,n = 5;

    for(i=1;i<=n;i++) 
    {
        for (j=1;j<=n-i+1;j++) 
        {
            printf("-");
        }
        for (k = 1;k<=(2*i)-1;k++) 
        {
            printf("%d",(2*i)-1);
        }
        for (j=1;j<=n-i+1;j++) 
        {
            printf("-");
        }
        printf("\n");
    }
}
//made by YusufEmreOzden