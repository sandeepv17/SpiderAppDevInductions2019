#include<stdio.h>


void sort(int a,int *s)
{
	int i,j,p;
	
	for(i=0;i<a-1;i++)
	{
		for(j=0;j<a-1;j++)
		{
			if(*(s+j+1) < *(s+j))
			{
		   	    p=*(s+j);
		    	*(s+j)=*(s+j+1);
		    	*(s+j+1)=p;
			}
		}
	}
}


void main()
{
	int i,r;
	
	printf("Enter the no. of elements:");
	scanf("%d",&r);
	int a[r];
	
	printf("\nEnter the elements:\n");
	for(i=0;i<r;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(r,&a);
	for(i=0;i<r;i++)
	{
		printf("%d ",a[i]);
	}
	
}