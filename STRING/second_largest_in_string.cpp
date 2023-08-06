
#include<iostream>
using namespace std;

class Solution {
private:
   bool isCharNumber(char c) {
    // Check if the ASCII value of the character is in the range of digit ASCII values (48 to 57)
    return c >= '0' && c <= '9';
}
public:
    int secondHighest(string s) {
     //check the present number is two or not
       int n = s.length();
       int cnt = 0;
        for(int i = 0 ;i <n ;i++ ){
           if(isCharNumber(s[i])){
               cnt++;
           }
           else{
               s[i] = 'M';
           }
        }

        if(cnt < 2){
            return -1;
        }

     //check the largest 
     int intmin; //INT_MIN 
     int maxi = intmin;

     for(int i =0 ;i <n ; i ++){
         if(s[i] == 'M'){
             continue;
         }
         int num = s[i] - '0';
         if(num > maxi){
             maxi = num;
         }
     }  

    //check every nummber is same or not
    int check = 0;
     for(int i =0 ;i <n ; i ++){
         if(s[i] == 'M'){
             continue;
         }
         int num = s[i] - '0'; //typecast
         if(num == maxi){
             check++;
         }
     }

     if(check == cnt){
         return -1;
     }  



     int largest = maxi;
     maxi = intmin;
     //check the sceond largest

     for(int i = 0 ; i<n ; i++){
         if(s[i] == 'M'){
             continue;
         }
         int num = s[i] - '0';

         if(num == largest){
             continue;
         }

         if(num > maxi){
             maxi = num;
         }
     }

     return maxi; 
        
        
    }
};