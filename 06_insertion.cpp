// WAP to insert a number at a given location in an Array
#include <iostream>
using namespace std;

int main()
{
    int array[50], n, pos, num;
    cout << "\n Enter the number of elements in Array : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "\n ARRAY : \n";
    for (int i = 0; i < n; i++)
    {
        cout << "\t " << array[i];
    }
    cout << "\n Enter the number which you want to enter: ";
    cin >> num;
    cout << "\n Enter the position from 0 - " << n - 1 << " where you want to enter the num: ";
    cin >> pos;
    for (int i = n; i >= pos; i--)
    {
        array[i + 1] = array[i];
        array[pos] = num;
    }
    for (int i = 0; i < n + 1; i++)
    {
        cout << "\t " << array[i];
    }
}