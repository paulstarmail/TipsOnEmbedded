/*

Enter the limit: 5
*****
****
***
**
*

*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int limit, i, j;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for(i = 0; i < limit; i++)
    {
        for(j = limit; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return(0);
}
