#include <bits/stdc++.h> 
#include <vector>

/*
algo
1.make a array left sum
2.make a array right sum
3.at which point/index the value of both array is same return it
4. if there no one suc as then return -1
 
*/

using namespace std;
int findEquilibriumIndex(vector<int> &arr) {
    // size of the array
    int n = arr.size();

    //left sum array
    vector <int> left(n);
    left[0] = 0;

    for(int i = 1 ;i <n ; i++){
        left[i] = arr[i-1] + left[i-1];
        
    }
    //right sum array
    vector <int> right(n);
    right[n-1] = 0;
    for(int i =n-2;i>=0;i--){
        right[i] = right[i+1] + arr[i+1];
        
    }
    //ans vector
    vector <int> ans;
     
     //if the right sum array and left sum array element is same
    for(int i =0;i<n;i++){
        if(right[i] == left[i]){
            ans.push_back(i); //ans push back
            
        }
    }
    

     if (ans.empty()) { //if there is no equilibriam then return -1
    return -1;
     } else {
       return ans[0]; //return the minimum index among indices
     }
}