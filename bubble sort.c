#include<stdio.h>
int main()
{
	int a[20],i,j,n,swap;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the elements in the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-2;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				swap=a[j];
				a[j]=a[j+1];
				a[j+1]=swap;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
