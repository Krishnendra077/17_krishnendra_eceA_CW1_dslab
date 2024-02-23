#include <iostream>
using namespace std;
int binarysearch(int array[], int n, int l, int r)
{

  
    while (l <= r)
    {  int mid = l + (r - l) / 2;
        if (array[mid] == n)
        {
            return mid;
        }
        if (array[mid] < n)
        {
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    return -1;
}

int main( )
{
    int array[5] = {1, 2, 3, 4, 7};
    int x ;
    cout<< "enter number of which index has to be found \n";
    cin>> x;
    int n = sizeof(array) / sizeof(array[0]);
    int result = binarysearch(array, x, 0, n - 1);
    if (result == -1)
    {
        printf("number is not found");
    }
    else
    printf("this is the index of the number %d\n", result);
}