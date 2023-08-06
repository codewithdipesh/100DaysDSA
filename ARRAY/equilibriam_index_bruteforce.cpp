#include <bits/stdc++.h> 
#include <vector> 
using namespace std;
int leftsum(vector<int> arr ,int n , int index){

    int sum = 0;
   
   for(int i =0;i<index ;i++){
       sum = sum+arr[i];
   }
   return sum;


}

int rightsum(vector<int> arr ,int n , int index){
    int sum = 0;
    for(int i = index +1 ; i<n;i++){
        sum = sum + arr[i];
    }
    return sum;
}
int findEquilibriumIndex(vector<int> &arr) {
    // Write your code here.
    int n = arr.size();
    vector<int> ans;
    
    for(int i = 1 ;i <n-1;i++){
    int right = rightsum(arr,n,i);
    int left = leftsum(arr,n,i);
    if(left == right){
        ans.push_back(i);
        
    }
    
    }
    
    if (ans.empty()) {
    return -1;
    }
     else {
    return ans[0];
} 
    
    
    
}

int main(){

    vector<int> arr{1 ,2, 2, 9, 3, 2};

    int ans = findEquilibriumIndex(arr);

    cout<<ans<<endl;





    return 0;
}