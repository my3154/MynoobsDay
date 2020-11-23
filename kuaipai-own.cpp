#include<stdio.h>
int a[n],n;
void kuaipai(int left,int right)
{
	int i,j,t,temp;
	if(left>right){
		return;
	}
	
	temp=a[left];
	i=left;
	j=right;
	while(i!=j)
	{
		while(a[j]>=temp&&i<j)
		{
			j--;
		}
		while(a[i]<=temp&&i<j)
		{
			i++;
		}
		if(i<j){
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
		
	a[left]=a[i];
	a[i]=temp;
	kuaipai(left,i-1);
	kuaipai(i+1,right); 
	
}

int main()
{
	scanf("%d",&n);
	for(int j=1;j<=n;j++)
	{
		scanf("%d",&a[j]);
	}
	kuaipai(1,n);
	for(int i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
}
