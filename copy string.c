#include<stdio.h>
int main()
{
	int a[10],b[10];
	int i;
	printf("enter the string:");
	scanf("%s",a);
	int d=strlen(a);
	for(i=0;i<d;i++)
	{
		b[i]=a[i];
	}
	printf("copied string is: %s",b);
}
