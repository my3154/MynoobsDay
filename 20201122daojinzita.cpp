#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int a[n][n]={0};
	int num=1;
	int i,j,k;
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n-i;j++)
		{
			a[i][j]=num++;
		}
	}
	
	
		for(int test1=0;test1<n;test1++)
	{
		for(int test2=0;test2<n;test2++)
		{
			if(a[test1][test2]==0){
				printf("\t");
				continue;
			}
			printf("%d\t",a[test1][test2]);
		}
		printf("\n");
	}
}
