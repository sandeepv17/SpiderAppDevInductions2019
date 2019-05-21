
#include <stdio.h> 
  
void exchange(int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
  

void bubsart(int arr[], int t) 
{ 
   int i, j; 
   for (i = 0; i < t-1; i++)       
  
          
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 
  

void display(int arr[], int s) 
{ 
    int i; 
    for (i=0; i < s; i++) 
        cout<<arr[i]; 
    cout<<t; 
} 
  
void main() 
{ 
    
    int arr[100],n;
    cout<<"enter number of elements";
    cin>>n;
    for(i=0; i<n; i++)
    cin>>arr[i];	
    bubsart(arr, n); 
    cout<<"Sorted array: \n";
    display(arr, n); 
    
} 