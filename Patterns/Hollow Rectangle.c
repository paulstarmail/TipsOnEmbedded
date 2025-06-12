/*

Enter the row: 3
Enter the column: 10
**********
*        *
**********

*/

#include <stdio.h>

int main(int argc, char* argv[])
{
    int row, col, i, j;
    printf("Enter the row: ");
    scanf("%d", &row);
    printf("Enter the column: ");
    scanf("%d", &col);
    for(i = 0; i < row; i++)
    {
        if(i == 0 || i == (row-1))
        {
            for(j = 0; j < col; j++)
            {
                printf("*");
            }
        }
        else
        {
            printf("*");
            for(j = 1; j < (col-1); j++)
            {
                printf(" ");
            }            
            printf("*");
        }
        printf("\n");
    }
    return(0);
}
