// WAP to insert a number in an aarray that is already sorted in ascending order
#include<iostream>
using namespace std;

int main()
{
   int array[10], n, num;
   cout<<"\n Enter the elements in array : ";
   cin>>n;
   for (int i = 0; i < n; i++)
   {
       cin>>array[i];
   }
   cout<<"\n Enetr the number which you want to enter in the array : ";
   cin>>num;
   for (int i = 0; i < n; i++)
   {
       if(array[i] > num)
       {
           for (int j = n-1; j >= i; j--)
               array[j+1] = array[j];
               array[i] = num;
               break;
       }
   }
    for (int i = 0; i < n+1; i++)
   {
       cout<<"\t "<<array[i];
   }

   
      
}