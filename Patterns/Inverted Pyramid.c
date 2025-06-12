/*

Enter the limit: 5
*********
 *******
  *****
   ***
    *

*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int limit, i, j, k;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for(i = 0; i < limit; i++)
    {
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
        for(k = 0; k < (limit-i-1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return(0);
}
