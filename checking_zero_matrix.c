#include <stdio.h>
int main()
{
    int r, c, check;
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] != 0)
            {
                check++;
            }
        }
    }

    if (check == 0)
    {
        printf("Zero Matrix");
    }
    else
    {
        printf("Not a zero matrix");
    }

    return 0;
}