#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define FALSE -1
typedef int Status;
typedef int Elemtype;
typedef struct Node{
	Elemtype data;
	struct Node *next;
}Node,*LinkList;
//初始化链表
Status ListInit(LinkList *L)
{
	*L=(LinkList)malloc(sizeof(Node));
	(*L)->next=NULL;
	return OK;
} 
//录入数据(1)头插法
void CreateList(LinkList *L,int n)
{
	int i;
	Node *p;
	*L=(LinkList)malloc(sizeof(Node));
	(*L)->next=NULL;
	for(i=n;i>0;i--)
	{
		p=(LinkList)malloc(sizeof(Node));
		printf("No.%d:",i);
		scanf("%d",&p->data);
		p->next=(*L)->next;
		(*L)->next=p;
	}
}
//录入方法(2)尾插发
LinkList *Create(LinkList *L)
{
	Node *r,*s;
	int c,n;
	int i;
	*L=(LinkList)malloc(sizeof(Node));
	r=*L;
	printf("你要输入多少个数:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("No.%d:",i);
		scanf("%d",&c);
		s=(LinkList)malloc(sizeof(Node));
		s->data=c;
		s->next=NULL;
		r->next=s;
		r=s;
	}
	return L;
}
//输出链表
void PrintList(LinkList L)
{
	Node *p;
	p=L->next;
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
//获取长度
int GetLength(LinkList L)
{
	Node *p;
	int count=0;
	p=L->next;
	while(p!=NULL)
	{
		count++;
		p=p->next;
	}
	return count;
}
