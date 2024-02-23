#include <stdio.h>
int binarySearch(int arr[], int l, int h, int x)
{

  while (l <= h)
  {
    int m = l + (h - l) / 2;
    if (arr[m] == x)

      return m;

    if (arr[m] < x)
      l = m + 1;

     else
      h = m - 1;  
  }
    return -1;
}
int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 10;
  int value = binarySearch(arr, 0, 4, x);
  printf(" tis is the index where the name has been found %d",value);
  return 0;
}