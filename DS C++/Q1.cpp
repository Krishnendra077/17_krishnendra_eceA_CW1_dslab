#include <iostream>
using namespace std;
void seaching(int a[], int n)
{
    for (int i = 0; i < n; i++)

    {
        if (a[i] == 9)
        {
            cout << i;
        }
    }
}

void insertingElement(int a[], int n)
{

    for (int i = n; i >= 2; i--)
    {
        a[i + 1] = a[i];
    }
    a[2] = 90;
    cout << " array after inserting the elements \n";
    for (int i = 0; i <= n; i++)
    {
        cout << a[i];
    }
}

void deleting(int a[], int n)
{
    for (int i = 2; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    cout << " this is the array after deleting ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}
void reversing(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("the reverse of the string is \n");
        int temp;
        for (int i = 0; i < n / 2; i++)
        {
            temp = a[i];
            a[i] = a[n - i - 1];
            a[n - i - 1] = temp;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
    }
}
void updating(int a[], int n)
{

    printf("updating of the string\n");

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            a[i] = a[i] * 2;
        }
        else
            a[i] = a[i] + 5;
    }
    printf("after updating the array\n");

    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}
int main()
{
    string name;
    cout << " \nenter the value of n ";
    int n, b;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << " this is the requred arrays \n";
    for (int i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }
    cout << " \nthe value of b form 1 to 5 ";
    cout << " \n1 and 2 is for the linaer search and reverse\n3 and 4 is for deleting and sorting\n5 and 6 is for updating and inserting\n";
    cin >> b;
    switch (b)
    {
    case 1:

        seaching(a, n);

        break;
    case 2:
        insertingElement(a, n);
        break;
    case 3:
        deleting(a, n);
        break;
    case 4:
        reversing(a, n);
        break;
    case 5:
        updating(a, n);
        break;
    }
}
