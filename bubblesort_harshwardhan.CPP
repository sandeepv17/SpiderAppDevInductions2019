#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;

getch();
clrscr();
printf("Enter no of elements\n");
scanf("%d",&n);
int a[100];
printf("Enter numbers");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
int j,temp;
for(i=0;i<n-1;i++)
{
	for(j=0;j<n-i-1;j++)
	{
	if(a[j]>a[j+1])
	{ temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	}
	}
}
for(i=0;i<n;i++)
	printf("%d\n",a[i]);


}