// WAP to perform linear search
#include<iostream>
using namespace std;

int main()
{
   int array[10], i, num, n, found = 0, pos = 0;
   cout<<"\n Enter the elements of array : ";
   cin>>n;
   for (int i = 0; i < n; i++)
   {
       cin>>array[i];
   }
   cout<<"\n Enter the number to be searched: ";
   cin>>num;
  for (int i = 0; i < n; i++)
  {
      if (array[i] == num)
      {
        found = 1;
       pos = i;
       cout<<"\n "<<num<<" is found in array at position = "<<i;
       i++;
          /* code */
      }
      
  }
   if (found == 0)
   {
       cout<<"\n "<<num<<" DOES NOT EXIST in the array ";
   }
   
   
   
    
}