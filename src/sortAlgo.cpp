#include <iostream> 
using namespace std; 

void InsertionSort(int arr[], int *begin, int *end);

int main(){
    int arr1[] = {10, 11, 12}; 
    int *ip; 
    ip = arr1; 
    cout<<ip<<endl;
    cout<<arr1<<endl; 
    cout<<ip-arr1<<endl; 
    /* int left = 0 - arr; 
    int right = 2 - arr; 
    cout<<arr<<endl; 
    cout<<left<<endl; 
    cout<<right<<endl; */
    int n = sizeof(arr1) / sizeof(arr1[0]);
    cout<<arr1+n-1<<endl; 
    InsertionSort(arr1, arr1, arr1+n-1);
    return 0;
    
}

/* Function to sort an array using insertion sort*/
void InsertionSort(int arr[], int *begin, int *end)
{
    // Get the left and the right index of the subarray
    // to be sorted
    int left = begin - arr;
    int right = end - arr;
    for (int i = left+1; i <= right; i++)
    {
        int key = arr[i];
        int j = i-1;
 
       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= left && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
   }
 
   return;
}