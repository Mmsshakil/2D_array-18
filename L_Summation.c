#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n], total = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        total = total + arr[i];
    }

    printf("%lld", total);

    return 0;
}