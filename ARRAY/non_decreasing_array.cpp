#include <bits/stdc++.h> 
bool isPossible(int *arr, int n)
{

    //check the part where we have to modify
    //where it breaks the increasing order

    int cnt =0 ;

    for(int i = 0 ; i< n-1 ; i++){
        if(arr[i] > arr[i+1]){
            cnt++;

           if((arr[i+2] < arr[i] && i+2 < n )  &&   (arr[i+1] < arr[i-1] &&  i>0 ) ){

             cnt++;
        
            }
        
        
        }

         if(cnt > 1){
             return false;
         }
        
        }


        return true;


}