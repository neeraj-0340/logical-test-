#include <stdio.h>
#include <string.h>

int main()
{
    int i, n, k = 0;
    int arr[100];
    int arr1[100];

    printf("Enter the size: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i = i + 2)
    {
        arr1[k] = arr[i];
        k++;
    }

    for (i = 0; i < k; i++)
    {
        printf("%d", arr1[i]);
    }

    return 0;
}