#include <bits/stdc++.h> 
using namespace std;
bool check9s(string s , int n){
	for(int i = 0 ;i <n;i++){
		if(s[i] != '9'){
			return false;
		}
	}

	return true;
}

string opposite(string s ,int e){
	

	string ans = "";

        for (int i = e; i >= 0; i--) {

                ans.push_back(s[i]);
        }
    return ans;
}

bool evencompareltor(string s, int n, string &left){
	int start = 0;
	int e = n-1;

	int mid = start + (e-start)/2;
	string leftoppo = "";
	string right = "";

	for(int i = 0 ; i <= mid ; i--){
 
      left.push_back(s[i]);
       

	}
    leftoppo = opposite(left,mid);
	// for(int i = mid ; i >= 0 ; i--){
 
    //   leftoppo.push_back(s[i]);
       

	// }

	for(int i = mid+1 ; i <= e ; i++){
		right.push_back(s[i]);
	}

	int l = stoi(left);
	int r = stoi(right);

	if(min(l,r) == l){
		return true;
	}

	return false;


}



string nextLargestPalindrome(string s, int length){
	// Write your code here.
	/*
	1.check all 9 
	    add 2
    2.check odd or even

	 even :
	     upto mid compare < last
		 
		 if then
		  uptomid + 1

	 uptomid ulto

	odd:

	   mid - 1 compare <last
	   if then
	     uptomid+1
	mid-1 ulto	 

		 
	*/
	string ans = "";
     if(check9s(s, length)){
		 int num = stoi(s) + 2 ;
		 ans = to_string(num);
		 
	 }

	 string left = "";

	 if(length%2 == 0){
        
		if(evencompareltor(s,length,left)){

			int num = stoi(left) + 1 ;
			left = to_string(num);


		}

		int e = left.size() -1 ;

		ans = left + opposite(left,e);

	 }


	 return ans;

	 



}



int main(){


  string str = "2349";

  string ans = nextLargestPalindrome(str,4);

  cout<<ans<<endl;

    return 0;
}