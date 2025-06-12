/*

Enter the limit: 5
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int limit, i, j;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for(i = 0; i < limit; i++)
    {
        for(j = 0; j < limit; j++)
        {
            if(j <= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        
        for(j = 0; j < limit; j++)
        {
            if(j < limit-i-1)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    
    for(i = 1; i < limit; i++)
    {
        for(j = limit; j > 0; j--)
        {
            if(j > i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        for(j = 0; j <= limit-1; j++)
        {
            if(j < i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return(0);
}
