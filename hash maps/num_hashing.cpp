#include<bits/stdc++.h>
using namespace std;


int main(){

    //num hashing/
    //-------------

     int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    //pre-storing
    int hash[13] = {0}; //make a array size of 13 and initialize all element =0
    for(int i = 0; i<n;i++){
        
        hash[arr[i]] += 1;

    }

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