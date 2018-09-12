#include <stdio.h>
#define CAPACITY 5
int stack[CAPACITY];
int top=-1;
int isFull();
{
	if(top==CAPACITY-1)
	{
	
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(int ele)
{
	
	if(isFull())
	{
		printf("stack is full\n");
	}
	else
		{
			top++;
			stack[top]=ele;
			printf("%d inserted\n",ele);
		}
}
int main()
{
	int i;
	printf("enter a value in the first stack\n");
	for(i=1;i<=5;i++)
	{
		scanf("%d",&ele);
	}

	return 0;
}
