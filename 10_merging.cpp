// WAP to merge two unsorted arrays
#include<iostream>
using namespace std;

int main()
{
    int array1[10], array2[10], array3[30], index1, index2, index3 = 0;
    cout<<"\n Enter the elemets of array 1 : ";
    cin>>index1;

    for (int i = 0; i < index1; i++)
    {
        cin>>array1[i];
        array3[index3] = array1[i];
        index3++;
    }
    cout<<"\n Enter the elemets of array 2 : ";
    cin>>index2;

    for (int i = 0; i < index2; i++)
    {
        cin>>array2[i];
        array3[index3] = array2[i];
        index3++;
    }

    cout<<"\n After MERGING two arrays ";
    for (int i = 0; i < index3; i++)
    {
           cout<<"\t  "<<array3[i];
    }

    cout<<"\n After Sorting: \n";
    for (int i = 0; i < index3; i++)
    {
        int temp = 0;
        for (int j = index3; j > i; j--)
        {
            if (array3[j] < array3[i])
            {
            temp = array3[i];
            array3[i] = array3[j];
            array3[j] = temp;
                /* code */
            }
            
        }
        cout<<"\t  "<<array3[i];
    }
    
    
}