#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int row;
    scanf("%d", &row);

    if (r == 1)
    {
        printf("Row Matrix");
    }
    if (r == 0)
    {
        printf("Column Matrix");
    }
    else if (r == c)
    {
        printf("Squre Matrix");
    }

    return 0;
}