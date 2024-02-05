/*You have been given an array ‘a’ of ‘n’ unique non-negative integers.



Find the second largest and second smallest element from the array.



Return the two elements (second largest and second smallest) as another array of size 2.



Example :
Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
Output: [4, 2]

The second largest element after 5 is 4, and the second smallest element after 1 is 2.
*/

#include <iostream>
#include <vector>
#include <limits>
vector<int> getSecondOrderElements(int n, vector<int> arr) {
    // Write your code here.

    int maxInt = std::numeric_limits<int>::max();
    int minInt = std::numeric_limits<int>::min();
    int minsecondInt=0; 
    std::vector<int> myVector;
    for( int i =0 ;i<n;i++)
    {
     if(arr[i]>minInt )
     {
         minsecondInt=minInt;

         minInt=arr[i]; 

     }
     if(arr[i]<minInt && arr[i]>minsecondInt)
     {
         minsecondInt=arr[i];
     }
    }
    myVector.push_back(minsecondInt);
    for( int i =0; i<n;i++)
    {
     if(arr[i]<maxInt )
     {
         minInt=maxInt;
         maxInt=arr[i];  

     }
     if(arr[i]>maxInt && arr[i]<minInt)
     {
         minInt=arr[i];
     }

    }
    myVector.push_back(minInt);
return myVector;

}
