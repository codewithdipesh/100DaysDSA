#include<bits/stdc++.h>
using namespace std;


void selectionSort(vector<int>&arr) {

    int n = arr.size();
    for(int i =0;i<n-1;i++){
        int mini = i;
        for(int j =i+1;j<n;j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        
        swap(arr[i],arr[mini]);
    }
}


int main()
{
     vector <int> arr = {13, 46, 24, 52, 20, 9};
     int n = arr.size();
    cout << "Before Using Selection Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr);
    return 0;

}