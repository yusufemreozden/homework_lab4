/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Print Stars                                                              */
/*                                                                            */
/*   By: Yusuf Emre OZDEN | <yusufemreozdenn@gmail.com>                       */
/*                                                                            */      
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main() 
{
    int i, j;
    int k = 8;

    for (i=1;i<=6;i++) 
    {
        for (j=1;j<=k;j++) 
        {
            printf("*");
        }
        printf("\n");
        k=k+3;
    }
}
//made by YusufEmreOzden