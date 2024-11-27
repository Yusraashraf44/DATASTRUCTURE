#include<stdio.h>
#define max 4
int top=-1;
int stack[max];
void push();
void pop();
void traversal();
int main()
{
	int choice;
	
	do
	{	
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				traversal();
				break;
			case 4:
				printf("exit");
				break;
			default:
				printf("wrong choice");
		}
	}
	while(choice<4);
	return(0);
}
		
void push()
{
	int element;
	if(top==max-1)
	{
		printf("stack overflow");
	}
	else
	{
		printf("enter the element:");
		scanf("%d",&element);
		top++;
		stack[top]=element;
	}
}
void pop()
{
	int element;
	if(top==-1)
	{
		printf("stack empty");
	}
	else
	{
		element=stack[top];
		top--;
		printf("element deleted is %d\n",element);
	}
}
void traversal()
{
	int i;	
	for(i=0;i<=top;i++)
	{
		printf("%d",stack[i]);
	} 
}		
	
