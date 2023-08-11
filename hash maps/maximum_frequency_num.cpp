#include<bits/stdc++.h>
using namespace std;

int maximumFrequency(vector<int> &arr, int n)
{
    //Write your code here
    int maxfreq = 0;
    unordered_map<int, int>hash;
    for(int i = 0 ; i<n ;i++){
        hash[arr[i]] += 1;
        maxfreq = max(maxfreq,hash[arr[i]]);
    }
    
    for(int i =0 ; i<n;i++){
        if(hash[arr[i]] == maxfreq){
            return arr[i];
        }
    }


    
}

int main(){
    return 0;
}