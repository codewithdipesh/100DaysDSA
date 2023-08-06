#include <bits/stdc++.h> 
using namespace std;
int firstMissing(int arr[], int n)
{
    // Write your code here.
    int positive = 1;
    int cnt = 0;
     
     while(positive <= n ){



         for(int i = 0 ; i<n;i++){

        
             if(arr[i] == positive){
                 positive++;
                
                 cnt++;
                 break;
             }


         }

         

     

     }

     return positive;

}


int main(){

    int arr[] = {5,4,3,2,1,-7,5};

    int ans = firstMissing(arr,8);
    cout<<ans<<endl;



    return 0;
}