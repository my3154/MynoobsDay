#include<stdio.h>
int main(void)
{
	int x;
	int a=2,b,c;
	int i;
	
	scanf("%d",&x);
	while(a<x)
	{
		if(x%a==0){
			x=x/a;
			a=1;
		}
		a++;
		
	}
	printf("%d",a);
}/*�Ż��ˣ�ʹ��һ����λ������ȥһ������ֺ����ˡ�
��28���Կ�Ϊ28��14��7-END.*/ 
