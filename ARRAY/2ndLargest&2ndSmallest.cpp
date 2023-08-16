#include<bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
   
    //optimal
    int maxi = INT_MIN;
    int maxi2 = INT_MIN;
    int mini = INT_MAX;
    int mini2 = INT_MAX;

    //maximum
    
    for(int i = 0; i<n;i++){
        if(a[i] > maxi){
             maxi2 = maxi;
             maxi = a[i];
        }
        else if(a[i] > maxi2 && a[i] != maxi){
            maxi2 = a[i];
        }
    }
  
  //minimum
      
    for(int i = 0; i<n;i++){
        if(a[i] < mini){
             mini2 = mini;
             mini = a[i];
        }
        else if(a[i] < mini2 && a[i] != mini){
           mini2 = a[i];
        }
    }

    
    
    
    
    if(maxi2 == INT_MIN){
        maxi2 = -1;
    }

     if(mini2 == INT_MAX){
        mini2 = -1;
    }

    vector<int> ans = {maxi2,mini2};
    return ans;
    
    
    

    
}
