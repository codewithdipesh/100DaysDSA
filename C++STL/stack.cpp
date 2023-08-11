#include <bits/stdc++.h>
using namespace std;

int main(){
  
  stack<int> st;
  st.push(1); //1 
  st.push(2); //2 1
  st.push(5); //5 2 1

  cout<<st.top();
  st.pop();

  bool b = st.empty();



    return 0;
}