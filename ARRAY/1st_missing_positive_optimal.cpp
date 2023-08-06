#include <bits/stdc++.h> 
using namespace std;
int firstMissing(int arr[], int n)
{
    
    // Write your code here.
     //mark the elements which are out of the range 
     //and change them to n+1 
     for(int i =0 ; i<n;i++){
         if(arr[i] <= 0 ){
             arr[i] = n+1;
         }
     }
     //mark the position of the present postivies.
     //change them negative [mapping]
     for(int i = 0 ;i<n;i++){

         int target= abs(arr[i]) -1;
         //so if the element is 10 and the target will be 9. so it is out of array/range
         //so to prevent it -----!
         
    ////////////////////////////////////////////
    //   //  if(target <n){                   //
    //   //      arr[target] *= -1;           //
    //                                        //
    //   //  }                                //
    ////////////////////////////////////////////

        /*so we have to check the doubled values.so when
        we mark the position we have to check whether it is negative or postive
        if it is negative means we have to ignore that 
        */
        if(target < n && arr[target] > 0){
            arr[target] *= -1;

        }
     }

     //check the first missing index
     for(int i =0 ; i<n;i++){
         if(arr[i] > 0){
             return i+1;
         }
     }

     //if all are negative it means all positive are present then return n+1

     return n+1;

}


int main(){

    int arr[] = {5,4,3,2,1,-7,5};

    int ans = firstMissing(arr,7);
    cout<<ans<<endl;

   


    return 0;
}