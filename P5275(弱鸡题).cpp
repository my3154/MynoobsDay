#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];
	int x=1;
	int i,j;
	

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=x;
			x++;
		}
	}
	
	
	for(int t1=0;t1<n;t1++)
	{
		for(int t2=0;t2<n;t2++)
		{
			if(a[t1][t2]<10){
				printf("X%d",a[t1][t2]);
			}
			else{
				printf("%d",a[t1][t2]);
			}
		}
		printf("\n");
	}
}
