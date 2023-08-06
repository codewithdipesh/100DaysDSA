#include <bits/stdc++.h> 
using namespace std;
string encode(string &message)
{
    //   Write your code here.
    /*
   \
    
    */

    int n = message.length();
    string ans = "";
    char prev;
    int cnt;

    for(int i = 0 ; i<n;i++){
        

        if(i== 0){
            prev = message[i];
            ans = message[i];
            cnt =1;
            continue;
        }

        if(message[i] == prev){
            cnt++;

        } else {
            ans += std::to_string(cnt); 
            ans = ans + message[i];
            prev = message[i];
            cnt =1 ;
        }
    }

   ans += std::to_string(cnt); 


     return ans;
}


int main(){

 string input = "aabbccddeeeeeeerrggfjjkl";
 string ans = encode(input);
  cout<<ans<<endl;


}