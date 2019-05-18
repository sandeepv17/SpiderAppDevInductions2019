#include <iostream.h>
#include <conio.h>

void bubsort(int A[10], int n)
{
int temp;
for (int i=0; i<n-1; i++)
{
 for(int j=0; j<n-1-i; j++)
  {
    if(A[j]>A[j+1])
    {
      temp=A[j];
      A[j]=A[j+1];
      A[j+1]=temp;
     } 
      }}
for(int k=0; k<n; k++)
 cout<<A[k]<<" ";
}

void main()
{
clrscr();
int arr[10], n;
cin>>n;
for(int i=0; i<n; i++)
 cin>>arr[i];
bubsort(arr,n);
getch();
}

