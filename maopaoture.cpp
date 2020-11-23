#include<stdio.h>
int main(void)
{
	int n;
	int A[n];
	int i=0,j=0,a,b,x,temp;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		A[i]=x;
	}
	
	for(a=0;a<n-1;a++)
	{
		for(b=0;b<n-a-1;b++)
		{
			if(A[b]>A[b+1]){
				temp=A[b];
				A[b]=A[b+1];
				A[b+1]=temp;
				mark=1;
			}
		}
	}
	
	for(j=0;j<n;j++)
	{
		printf("%d\t",A[j]);
	}
}
