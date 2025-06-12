/*

Enter the limit: 5
*
**
***
****
*****

*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int limit, i, j;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for(i = 0; i < limit; i++)
    {
        for(j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return(0);
}
