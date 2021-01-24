#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct stu{
	char name[5];
	char cla[10];
	char sex[2];
	char year[3];
	int god;
	int code;
	struct stu *next;
}stu;
int num=1;

void add(stu **head);
void plus(stu **head);
void printit(stu **head);
int del(stu **head);
int m();
void save(stu **head);
void p(stu **head);
int find(stu **head);
int change(stu **head);


int main(void)
{
	printf("管理员密码：3154\n");
	FILE *fp=fopen("student.txt","a");
	fprintf(fp,"%d\n",3154);
	
	int n=1;
	int key;
	stu *head=NULL;
	int count=3;
	while(1)
	{
		printf("请输入密码：");
		scanf("%d",&key);
		if(key==3154){
			printf("\n登陆成功！\n");
			break;
		}else{
			printf("密码错误，剩余%d次机会\n",count);
			count--;
		}
		if(count==-1){
			printf("达到最大尝试数！系统已锁定");
			break;
		}
	}
	while(n!=0&&key==3154){	
	n=m();
	
	
	
	
	if(n==1){
		add(&head);
		//printit(&head);
	}

	if(n==2){
		plus(&head);
		//printit(&head);
	}	
	
	if(n==3){
		del(&head);//by name!
		//printit(&head);
	}
	if(n==4){
		printit(&head);
	}
	if(n==6){
		printf("\n\n感谢使用QwQ\n\n");
		break;
	}
	if(n==5){
		save(&head);
	}
	if(n==7){
		p(&head);
	}
	if(n==8){
		find(&head);
	} 
	if(n==9){
		change(&head);
	}
	printf("\n_______________\n\n");
}
	return 0;
}


void add(stu **head){
	printf("\n名字\t性别\t年龄\t班级\t成绩\n");
	stu *b=NULL;
	while(1)
	{
		stu *temp=(stu*)malloc(sizeof(stu));
		scanf("%s",temp->name);
		if(strcmp(temp->name,"QAQ")==0){
			break;//break point!
		}
		scanf("%s%s%s%d",temp->sex,temp->year,temp->cla,&temp->god);
//		printf("此学生成绩：");
//		scanf("%d",&temp->god);
		temp->code=num++;
		temp->next=NULL;
		if(*head==NULL){
			*head=temp;
		}else{
			b->next=temp;
		}
		b=temp;
	}
}

void printit(stu **head){
	stu *temp=*head;
	if(*head==NULL){
		printf("\n目前无学生录入！");
	}
	while(temp!=NULL){
		printf("NAME:%s\tSEX:%s\tYEAR:%s\tCLASS:%s\tSCORE:%d\tID CODE:%d\n",temp->name,temp->sex,temp->year,temp->cla,temp->god,temp->code);
		temp=temp->next;
	}
	
}

void plus(stu **head){
	stu *temp=*head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	stu *a=(stu*)malloc(sizeof(stu));
	scanf("%s%s%s%s",a->name,a->sex,a->year,a->cla);
	a->code=num++;
	temp->next=a;
	a->next=NULL;
}

int del(stu **head){
	stu *temp=*head;
	char key[5];
	scanf("%s",key);
	if(strcmp(temp->name,key)==0){
		*head=temp->next;
		return 0;
	}
	while(temp!=NULL){
		if(strcmp(temp->next->name,key)==0){
			temp->next=temp->next->next;
			break;
		}
		temp=temp->next;
	}
}

int m(){
	int n;
	printf("1-创建学生\n");
	printf("2-添加学生\n");
	printf("3-删除学生\n");
	printf("4-显示所有学生\n");
	printf("5-确认无误后将学生链表保存在文件中\n");
	printf("6-退出系统\n");
	printf("7-由成绩进行排序\n");
	printf("8-由姓名查找学生\n");
	printf("9-由姓名改学生信息\n");
	printf("输入指定数字以进行操作：");
	scanf("%d",&n);
	return n;
}

void save(stu **head){
	FILE *fp=fopen("student.txt","a");
	stu *temp=*head;
	while(temp!=NULL){
		
		fprintf(fp,"NAME:%s\tSEX:%s\tYEAR:%s\tCLA:%s\tSCORE%d\tID CODE:%d\t\n",temp->name,temp->sex,temp->year,temp->cla,temp->god,temp->code);
		
		temp=temp->next;
	}
}

void p(stu **head){
	stu* temp=*head;
	stu *t=NULL;
	int m;
	while(temp->next!=NULL)
	{
		t=temp->next;
		while(t!=NULL)
		{
			if(temp->god < t->god){
				m=temp->god;
				temp->god=t->god;
				t->god=m;
			} 
			t=t->next;
		}
		
		
		temp=temp->next;
	}
	
	printf("%s",temp->name);
}


int find(stu **head)
{
		stu *temp=*head;
	char key[5];
	scanf("%s",key);
	if(strcmp(temp->name,key)==0){
		printf("找到了！\nNAME:%s\tSEX:%s\tYEAR:%s\tCLA:%s\tSCORE%d\tID CODE:%d\t\n",temp->name,temp->sex,temp->year,temp->cla,temp->god,temp->code);
		return 0;
	}
	while(temp!=NULL){
		if(strcmp(temp->next->name,key)==0){
		printf("找到了！\nNAME:%s\tSEX:%s\tYEAR:%s\tCLA:%s\tSCORE%d\tID CODE:%d\t\n",temp->name,temp->sex,temp->year,temp->cla,temp->god,temp->code);
		return 0;
		}
		temp=temp->next;
	}
}

int change(stu **head)
{
		stu *temp=*head;
	char key[5];
	scanf("%s",key);
	if(strcmp(temp->name,key)==0){
		printf("输入新的信息：名字\t性别\t年龄\t专业\t成绩\n");
		scanf("%s%s%s%s%d",temp->name,temp->sex,temp->year,temp->cla,&temp->god);
		return 0;
	}
	while(temp!=NULL){
		if(strcmp(temp->next->name,key)==0){
		printf("输入新的信息：名字\t性别\t年龄\t专业\t成绩\n");
		scanf("%s%s%s%s%d",temp->name,temp->sex,temp->year,temp->cla,&temp->god);	
		return 0;
		}
		temp=temp->next;
	}
}



