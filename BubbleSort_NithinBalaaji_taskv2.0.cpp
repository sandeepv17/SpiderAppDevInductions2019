//Code for bubble sort

#include <stdio.h> 
  
void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 
 
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
   
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 
  

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout<<("%d ", arr[i]); 
    cout<<("n"); 
} 
 
int main() 
{ 
   int arr[10];
   
   for(int i=0;i<10;i++){
   cin>>arr[i];
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubbleSort(arr, n); 
    cout<<("Sorted array: \n"); 
    printArray(arr, n); 
    return 0; 
} 
