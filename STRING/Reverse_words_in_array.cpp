#include <iostream>
using namespace std;

/*
//temp = for string each word
//ans = string the ans from/adding temp
1.iterate the string check the first extra space
2.if any nonspace char found assign them to temp and move forward
3.if any spcae encountered break the loop
4.if ans is empty then assign temp to ans
  otherwise ans = temp + space + ans 

*/

string reverseStringWordWise(string input)
{
  string ans = "";
  int i = 0;
  int n = input.size()  ; 
  //iterate the whole string
  while(i<n){
      string temp = "";
      //check the leading spaces
      while(input[i] == ' ' && i<n){
          i++;

      }
      //nonspace char found assign them to temp and move forward
      while(input[i] != ' ' && i<n){
        temp += input[i];
        i++;
      }
      //add the words to the ans string
      if(ans.size() > 0){
          ans = temp + ' ' + ans;
      }
      else{
          ans = temp;
      }

  }

  return ans;
    
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}