#include<iostream>

using namespace std;
//implementing the quick sort


int partition(int *arr,int s , int e){

    int p = arr[e];

    int i = s - 1;
    int j = s;

    while(j< e){
        if(arr[j++] < arr[e]){
            ++i;
        }
    }
   swap(arr[i+1],arr[e]);

   return i+1;



}

void QuickSort(int *arr , int s ,int e ){

    //base case 


      if(s>=e){
        return;
      }


    //
    int pivot = partition(arr,s,e);

    QuickSort(arr,s,pivot - 1);
    QuickSort(arr,pivot + 1 , e);





}

int main(){
 
     int arr[8] = {7,4,9,2,5,8,0,1};

     int p = partition(arr,0,7);
     
      cout<<p<<endl;

    return 0;
}
