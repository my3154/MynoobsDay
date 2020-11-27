#include<stdio.h>
int main(void)
{
	int n;
	int i,j,k,g;
	int x;
	int a=1;
	
	scanf("%d",&n);
	printf("%d",n);
	for(i=0;i<n-1;i++)
	{
		printf("\n");
		for(j=0;j<a;j++)
		{
			printf("0");
		}
		for(k=0;k<n-a;k++)
		{
			printf("1");
		}
		a++;
	}
	printf("\n");
	for(g=0;g<n;g++)
	{
		printf("1");
	}
}
