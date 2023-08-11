#include<bits/stdc++.h>
using namespace std;


int main(){
 
 //char hashing
 //------------

 string s;
 s = "madam//'0{}";

 //pre-storing

 //if only lowercase or uppercase
 int hash[26] = {0};   //there are total 26 alphabet /
 for(int i = 0 ;i <s.size() ;i ++){
    hash[s[i] - 'a'] += 1;   //for upper case
                             // hash[s[i] - 'A'] += 1;

 }


 //for all characters
 int hash[256] = {0};   //there are total 256 characaters /
 for(int i = 0 ;i <s.size() ;i ++){
    hash[s[i]] += 1;  //s[i] will typecast from char to int  
 }

    
    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;

        //fetching
        cout<<"occuring of "<<ch<<"is"<<hash[ch] <<endl;
    }

return 0;

}