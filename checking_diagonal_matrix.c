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

    if (r == c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if ((i != j) && (arr[i][j] != 0))
                {
                    check++;
                }
            }
        }
    }
    else
    {
        printf("Not Diagonal Matrix");
        return 0;
    }

    if (check == 0)
    {
        printf("Diagonal Matrix");
    }
    else
    {
        printf("Not Diagonal Matrix");
    }

    return 0;
}