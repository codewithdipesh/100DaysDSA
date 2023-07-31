#include <iostream>
#include <vector>

using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
  ////corner case ////
  //1:Only 1 element or no element is there
  //2:All element are same 
  
  //if there is element below two
  if (n < 2){
      return -1;
  }

  //largest element

  int maxi = INT64_MIN; //INT_MIN
  for(int i =0 ; i< n ; i++){
      if(arr[i] > maxi){
          maxi = arr[i];
      }
  }

      //check if all elements are same or not
       int cnt = 0;
        for(int i = 0 ;i <n ;i ++){
           if(arr[i] == maxi){
             cnt++;
           }
          } 

         if(cnt == n){
         return -1;
        }

    int firstlarger = maxi; //THE LARGEST 
    maxi = INT64_MIN;   //INT_MIN

     //check the second largest element

     for(int i =0 ; i< n ; i++ ){
      //avoid the largest
      if(arr[i] == firstlarger){
          continue;
      }
      //second largest
      if(arr[i] > maxi){
          maxi = arr[i];
      }

     }
  
     return maxi;

}

