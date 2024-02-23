// write a menue driven program to perform the following  opertation traversal .linear search for an elemnt in the array
// string reversal
// updating the elments of array ( multilply the elments by 2 and add 5 to the elemnts at odd indeces)
// inseritng an elements in the array at the certified position
// deleting of elements at the specific position
// sorting of array / bobble sort
#include <stdio.h>
#include <stdlib.h>
void linearsearch(int a[], int c)
{
    printf("linear search of an array elemnts\n");

    for (int i = 0; i < c; i++)
    {
        if (a[i] == 7)
        {
            printf("this is the indescs %d of this elemnets %d", i, a[i]);
        }
    }
}
void reverse(int a[], int c)
{

    printf("the reverse of the string is \n");
    int temp;
    for (int i = 0; i < c / 2; i++)
    {
        temp = a[i];
        a[i] = a[c - i - 1];
        a[c - i - 1] = temp;
    }
    for (int i = 0; i < c; i++)
    {
        printf("%d", a[i]);
    }
}
void updating(int a[], int c)
{

    printf("updating of the string\n");

    for (int i = 0; i < c; i++)
    {
        if (a[i] % 2 == 0)
        {
            a[i] = a[i] * 2;
        }
        else
            a[i] = a[i] + 5;
    }
    printf("after updating the array\n");

    for (int i = 0; i < c; i++)
    {
        printf("%d ", a[i]);
    }
}
void inseritng(int a[], int c, int m)
{
    printf("after incresing the size of the array add the element at the mth indices \n");
    for (int i = c + 1; i >= m; i--)
    {
        a[i] = a[i - 1];
    }
    a[m] = 7;
    for (int i = 0; i < c + 1; i++)
    {
        printf("%d ", a[i]);
    }
}
void deleting(int a[], int c)
{

    printf("delete the elemnt at the 10th place \n");

    for (int i = c; i < c + 1; i++)
    {
        a[i] = a[i + 1];
    }
    for (int i = 0; i < c; i++)
    {
        printf("%d ", a[i]);
    }
}
void sorting(int a[], int c)
{

    printf("sorting of an array \n");
    for (int i = 0; i < c - 1; i++)
    {
        for (int j = 0; j < c - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int larg = a[j];
                a[j] = a[j + 1];
                a[j + 1] = larg;
            }
        }
    }
    for (int i = 0; i < c; i++)
    {
        printf("%d", a[i]);
    }
}
int main()
{
    int i, n, m, q;
    // printf(" value of n \n");
    // scanf("%d", &n);
    printf(" value of m \n ");
    scanf("%d", &m);
    printf("enter the size of the array");
    int size;
    scanf("%d", &size);
    int *a = (int *)malloc(size * sizeof(int));
    int c = size;
    int larg = 0;

    printf("elemnts of an array are\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    while (1)
    {
        printf("press 1 to 6 to perform the given operation");
        printf("press 1 to 6 to perform the given operation");
        printf("enter 1 to do the linear search\n");
        printf("enter 2 to do the reverse\n");
        printf("enter 3 to do the updating\n");
        printf("enter 4 to do the inserting \n");
        printf("enter 5 to do the deleting \n");
        printf("enter 6 to do the sorting\n");
        printf("enter 7 to do the exit\n");
        scanf("%d", &q);
        switch (q)
        {
        case 1:
            linearsearch(a, c);

            break;
        case 2:
            reverse(a, c);
            break;

        case 3:
            updating(a, c);

            break;
        case 4:
            inseritng(a, c, m);
            break;
        case 5:
            deleting(a, c);
            break;
        case 6:
            sorting(a, c);
            break;
        case 7:
            goto exit ;
        default:
            break;
        }
    }
    exit:

    return 0;
}