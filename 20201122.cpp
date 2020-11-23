#include<stdio.h>
int main(void)
{
	char a;
	while((a=getchar())!='\n')
	{
		if(int(a)==32){
			printf("|DATA|");
		}
		else{
			printf("%c",a);
		}
	}
}
