#include <stdio.h>
int main()
{
    int r, c, search, result = 0;
    scanf("%d %d", &r, &c);
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &search);

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == search)
            {
                result++;
            }
        }
    }

    if (result != 0)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    }

    return 0;
}