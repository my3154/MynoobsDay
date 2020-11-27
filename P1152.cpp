#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int a[n];
	int b[n-1]={0};
	int i,j,k,g;
	int temp,mark=1;
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n-1;j++)
	{
		temp=a[j+1]-a[j];
		if(a[j+1]-a[j]>0){
			b[j]=temp;
		}
		else{
			b[j]=-temp;
		}
	}
	
//	for(int t1=0;t1<n-1;t1++)
//	{
//		printf("%d\t",b[t1]);
//	} ONLY FOR TEST!
	
	
	for(k=0;k<n;k++)
	{
		mark=1;
		for(g=0;g<n-1;g++)
		{
			if(a[k]==b[g]){
				mark=0;
				
			}
		}
	}
	if(mark==0){
		printf("Jolly");
	}
	else{
		printf("Not jolly");
	}
	
}
