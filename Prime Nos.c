#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter any number:\n");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		int count=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count+=1;
			}
		}
		if(count==0) 
		{
			printf("%d\t",i);
		}
	}
}
