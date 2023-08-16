
int i =1;
void insertionSort(int arr[], int n)
{
       //base case
       if(i>=n){
           return ;
       }
  
        
        int temp = arr[i];
        int j = i-1;
        while (j >= 0) {
           if(arr[j] > temp){
               arr[j+1] = arr[j];
               j--;
           }
           else{
               break;
           }
        }

        arr[j+1] = temp;
        i++;
        

      insertionSort(arr, n);
}