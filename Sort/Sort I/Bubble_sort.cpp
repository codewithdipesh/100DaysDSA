#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) 
{
    //write your code here
     for(int i = 0 ;i <n-1;i++){
       for(int j = 0 ; j<n-1-i;j++){
           if(arr[j] > arr[j+1]){
               swap(arr[j],arr[j+1]);
           }
       }
    
    }
}




int main()
{
     int arr[] = {13, 46, 24, 52, 20, 9};
     int n =  sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr,n);
    return 0;

}


