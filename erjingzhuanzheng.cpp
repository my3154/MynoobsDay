#include<stdio.h>
#include<math.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i,j,m=0,b,sum=0;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(j=n-1;j>=0;j--)
	{
		b=pow(2,m);
		printf("<%d> ",b);
		m++;
		sum+=a[j]*b;
		printf(" {%d}\n",sum);
	}
	printf(">>>%o",sum);
	
}

