#include<stdio.h>
#include<math.h>
int main(void)
{
	int a;
	int i;
	int num;
	int sum=0;
	int count=0;
	
	scanf("%d",&a);
	int copy=a;
	while(count==0)
	{
		if(a%10==0){
			copy=a/10;
		}
		else{
			count++;
		}
		a=a/10;
	}//删除末尾的0！
	for(;copy!=0;copy=copy/10)//使其对于负数值也同样适用！ 
	{
		num=copy%10;
		sum=sum*10+num;//巧妙的算式。 
	} 
	printf("%d",sum);
}
