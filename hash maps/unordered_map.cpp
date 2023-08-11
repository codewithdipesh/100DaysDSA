#include<bits/stdc++.h>
using namespace std;


int main(){


     int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    //pre-storing
    unordered_map<int,int>hash;
    for(int i = 0; i<n;i++){
        
        hash[arr[i]] += 1;

    }
    //    //iterator
    //    for(auto it: arr){
       
    //      hash[arr[it]] += 1;
         
    //     }

    int q; //no of query
    cin>>q;

    while(q--){
        int number;
        cin>>number;

        //fetching
        cout<<"occuring of "<<number<<"is"<<hash[number] <<endl;
    }

return 0;

}