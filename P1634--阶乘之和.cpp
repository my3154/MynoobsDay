#include<stdio.h>
#include<math.h>
int main(void)
{
	int x;
	int n;
	int i;
	int temp;
	int sum=0;
	
	scanf("%d %d",&x,&n);
	for(i=0;i<=n;i++)
	{
		temp=pow(x,i);
		sum+=temp;
	}
	printf("%d",sum);
} 
