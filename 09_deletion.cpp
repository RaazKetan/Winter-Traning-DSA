//WAP to delete a number from selected position

#include <iostream>
using namespace std;

int main()
{
    int array[10], n, num, pos, j = 0;
    cout << "\n Enetr the elements of array : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "\n ARRAY BEFORE DELETION \n";
    for (int i = 0; i < n; i++)
    {
        cout << "\t " << array[i];
    }
    cout<<"\n Enter the number of deletion : ";
    cin>>num;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == num)
        {
               continue; 
        }
        array[j] = array[i];
        j++;
    }
    cout<<"\n After DELETION \n";
    for ( j = 0; j < n-1; j++)
    {
        cout << "\t "<<array[j];
    }
    
    
}