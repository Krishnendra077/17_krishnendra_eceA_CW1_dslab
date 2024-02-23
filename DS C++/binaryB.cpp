#include <iostream>
using namespace std;

int binarysearch(int array[], int l, int r, int n)
{
    if (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (array[mid] == n)
        {
            return mid;
        }
        if (array[mid] < n)
        {
            return binarysearch(array, mid + 1, r, n);
        }
        else
        {
            return binarysearch(array, l, mid - 1, n);
        }
    }
    return -1;
}
int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    cout<< " enter the value of n \n";
    int n;
    cin >> n;
    int size = sizeof(array) / sizeof(array[0]);
    int result = binarysearch(array, 0, size - 1, n);
    (result == -1)
        ? cout << "number is not present in the array"
        : cout << "number is present at this index" << result;
}