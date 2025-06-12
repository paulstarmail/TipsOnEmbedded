/*

Enter the limit: 4
****
*  *
*  *
****

*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int limit, i, j;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for(i = 0; i < limit; i++)
    {
        if(i == 0 || i == (limit-1))
        {
            for(j = 0; j < limit; j++)
            {
                printf("*");
            }
        }
        else
        {
            printf("*");
            for(j = 1; j < (limit-1); j++)
            {
                printf(" ");
            }            
            printf("*");
        }
        printf("\n");
    }
    return(0);
}
