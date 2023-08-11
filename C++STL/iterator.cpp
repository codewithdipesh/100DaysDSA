#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);// 1
    v.emplace_back(2); //1 2 

    vector<int> v(5);
    vector<int> v(5,100); // 100 100 100 100 100
    

    for(vector<int>::iterator it = v.begin(); it != v.end() ; it++){
        cout<<*(it)<<" ";
    }

    for(auto it = v.begin() ;it != v.end() ; it++){
        cout<<*(it)<<" ";
    }

    for(auto it : v){
        cout<<it<<" ";
    }






    return 0;
}