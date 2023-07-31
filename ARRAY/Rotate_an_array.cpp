#include <bits/stdc++.h> 
#include <iostream>
using namespace std;


void rotateArray(int arr[],int n , int k){

    //we have to rotate in the same array
    //make a copy of the array
    int cpy[n] ;
    for(int i =0;i<n;i++){
        cpy[i] = arr[i];
    }
    
    // k=2 means in the arr[i] will be the cpy[(i+2)%n] 

     for (int i = 0; i<n ; i++){
         arr[i] = cpy[(i+k)%n];
     }
}

/*

int main() {
        int n , k ;

    cin >> n ;

    int arr[n] ;

    for(int i = 0 ; i < n ; i++){
         cin>>arr[i] ;
    }

    cin >> k ;

     rotateArray(arr , n , k) ;
     for(int i = 0 ; i < n ; i++){
         cout<<arr[i]<<" " ;
    }
    

    return 0;
}

*/