arr=[]
i=0
n=int(input(print("Enter number of elements in array")))
while(i<n):
    arr.append(int(input()))
    i=i+1
j=0
t=0
k=0
while(k<n-1):
    while(j+1<n):
        if(arr[j]>arr[j+1]):
           t=arr[j]
           arr[j]=arr[j+1]
           arr[j+1]=t
        j=j+1
    j=0
    k=k+1
print(arr)
    
