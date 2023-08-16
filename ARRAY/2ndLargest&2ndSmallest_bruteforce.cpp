#include<bits/stdc++.h>
using namespace std;
vector<int> getSecondOrderElements(int n, vector<int> a) {
   
    //brute force
    //2nd maximum 
    int maxi = INT_MIN;
    for(int i =0;i<n;i++){
        if(a[i] > maxi){
            maxi = a[i];
        }
    }
    int maximum = maxi;
    maxi = INT_MIN;
     for(int i =0;i<n;i++){
         if(a[i] ==maximum){
             continue;
         }
        if(a[i] > maxi){
            maxi = a[i];
        }
    }

    //2ndminimum
      int mini = INT_MAX;
    for(int i =0;i<n;i++){
        if(a[i] < mini){
            mini = a[i];
        }
    }
    int minimum = mini;
    mini = INT_MAX;
     for(int i =0;i<n;i++){
         if(a[i] ==minimum){
             continue;
         }
        if(a[i] > mini){
            mini = a[i];
        }
    }
    
    if(maxi == INT_MIN){
        maxi = -1;
    }

     if(mini == INT_MAX){
        mini = -1;
    }

    vector<int> ans = {maxi,mini};
    return ans;
    
    
    

    
}