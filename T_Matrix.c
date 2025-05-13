#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int primarysum = 0, secondarysum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                primarysum = primarysum + arr[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) == n - 1)
            {
                secondarysum = secondarysum + arr[i][j];
            }
        }
    }

    int total = primarysum - secondarysum;

    printf("%d", abs(total));
    return 0;
}