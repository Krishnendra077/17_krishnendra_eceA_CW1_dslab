#include <stdio.h>
int binarySearch(int arr[], int l, int h, int x)
{

    if (l <= h)
    {
        int m = l + (h - l) / 2;
        if (arr[m] == x)

            return m;

        if (arr[m] < x)
            return binarySearch(arr, m + 1, h, x);

        if (arr[m] > x)
            return binarySearch(arr, l, m - 1, x);
    }
    return -1;
}
int main()
{
    int x;
    printf(" enter the value of x \n");
    scanf("%d", &x);
    int c;
    printf("enter the valur of c\n");
    scanf("%d", &c);
    int arr[c];
    printf("enter the elemnts of the array");
    for (int i = 0; i < c; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("the values of arrays\n");
    for (int i = 0; i < c; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int n = sizeof(arr) / sizeof(arr[0]);
    int value = binarySearch(arr, 0, 4, x);
    (value == -1)
        ? printf(" no element is found ")

        : printf(" this is the index where the name has been found %d", value);

    return 0;
}