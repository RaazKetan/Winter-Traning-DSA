//WAP to perform binary search
#include <iostream>
using namespace std;

int main()
{
    int array[10], beg = 0, end, mid, i, n, found;
    cout << "\n Enter the elements of array : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    end = n - 1;
    int num;
    cout<<"\n Enter the number you want to search : ";
    cin>>num;

    while (beg <= end)
    {
        mid = (beg+end)/2;

        if(array[mid] == num)
        {
               cout<<"\n "<<num<<" is present in the array at position = "<<mid;
               found = 1;
               break;
        }
        if (array[mid] > num)
        {
            end = mid-1;
        }
        else if(array[mid] < num)
        {
            beg = mid+1;
        }
        if (beg > end && found == 0)
        {
            cout<<"\n "<<num<<" DOES NOT EXIST in array";
        }
    }
    
}