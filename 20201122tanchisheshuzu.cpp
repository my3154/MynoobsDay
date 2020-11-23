#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int A[n][n];
	int i,j,k;
	int mark;
	int temp=1;
	int up=0,down=1,left=2,right=3;//left for zuo
	int key=0;
	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			key++;
			//here is the break point!!
			if((i+1)%2==0){
				A[i][n-1-j]=key;
			}
			if((i+1)%2!=0){
				A[i][j]=key;
			}
		}
	}
	




	
	for(int test1=0;test1<n;test1++)
	{
		for(int test2=0;test2<n;test2++)
		{
			printf("%d\t",A[test1][test2]);
		}
		printf("\n");
	}
}
