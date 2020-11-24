#include<stdio.h>
int main(void)
{
	int a,b,c;
	int i=1,j,k;
	int count=0;
	int x;
	scanf("%d",&x);
	while(count<x)
	{
		k=0;
		b=i;
		for(j=0;j<i;j++)
		{
			k++;
			count++;
			if(count==x){
				break;
			}
			b--;
		}
		i++;
	}
	
	printf("%d/%d",k,b);
}
