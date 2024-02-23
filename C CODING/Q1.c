// write a menue driven program to perform the following  opertation traversal .linear search for an elemnt in the array
// string reversal 
// updating the elments of array ( multilply the elments by 2 and add 5 to the elemnts at odd indeces)
// inseritng an elements in the array at the certified position 
// deleting of elements at the specific position 
// sorting of array / bobble sort
#include <stdio.h>
int main()
{
    int n;
    printf("the value of n ");
    scanf("%d", &n);
    int a[100];
    printf("the elements of arrays are");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }

    for (int i = 6; i >= n; i--)
    {
        a[i] = a[i - 1];
    }
    a[n] = 40;
    printf("insert the value at the nth position\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d", a[i]);
    }
  printf("the value that has to be removed");

  for (int i = 2 ; i < 6; i++)
  {
    a[i] = a[i+1];
    
  }
   for (int i = 0 ; i < 5; i++)
  {
    printf("%d",a[i]);
    
  }
    return 0;
}