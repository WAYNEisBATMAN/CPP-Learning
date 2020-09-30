/*
/ INSERTION SORT
Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. 
The array is virtually split into a sorted and an unsorted part. 
Values from the unsorted part are picked and placed at the correct position in the sorted part.

! Here we compare each element to its previous elements.

. Algorithm
To sort an array of size n in ascending order:
1: Iterate from arr[1] to arr[n] over the array.
2: Compare the current element (key) to its predecessor.
3: If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one 
   position up to make space for the swapped element.
   
*/

#include <iostream>
using namespace std;

void Insertion_Sort(int myarray[], int n)
{
   for (int i = 1; i <= n - 1; i++)
   {
      int e = myarray[i];
      int j = i - 1;

      while (j >= 0 and myarray[j] > e)
      {
         myarray[j + 1] = myarray[j];
         j = j - 1;
      }
      myarray[j + 1] = e;
   }
}

int main()
{
   int i, n;

   cout << "Enter number of elements for the array: " << endl;
   cin >> n;
   int myarray[n];
   cout << "Enter elements of the array: " << endl;

   for (i = 0; i < n; i++) //Initialization
   {
      cin >> myarray[i];
   }

   Insertion_Sort(myarray, n);
   for (i = 0; i < n; i++)
   {
      cout << myarray[i]
           << ",";
   }
}
