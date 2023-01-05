// WAP to find wheather the array of integers contains a duplicate number
#include <iostream>
using namespace std;

int main()
{
    int array[10], n;

    cout << "\n Enter the number of elements of array ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    for (int i = 0; i < n; i++)
    {
        for(int j  = i+1; j < n; j++)
        {
            if(array[i] == array[j] && i !=  j)
            cout<<"\n The duplicate number is found in "<<i<<" location, The number is "<<array[i];
        }
    }
    
}