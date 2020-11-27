#include<stdio.h>
int main(void)
{
	int n;
	
	int A[n];
	int i,j,k;
	int temp;
	//int sum=0;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	
	for(j=0;j<n-1;j++)
	{
		
		for(k=0;k<n-j-1;k++)
		{
			if(A[k]<A[k+1]){
				
				temp=A[k];
				A[k]=A[k+1];
				A[k+1]=temp;
				//sum++;
			}
			//sum++;
		}
		//sum++;
	}
	
	for(int t1=0;t1<n;t1++)
	{
		printf("%d ",A[t1]);
	}
	
	//printf("%d",sum);
}
