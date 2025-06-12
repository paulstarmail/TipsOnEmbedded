/*

Enter the limit: 5
    *
   ***
  *****
 *******
*********

*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int limit, i, j, k;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for(i = 0; i < limit; i++)
    {
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
        for(k = 0; k < i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return(0);
}
