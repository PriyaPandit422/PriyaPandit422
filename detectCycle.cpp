//Detect a cycle
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct Node{
	int data;
	struct Node* prev;
	struct Node* next;
}*start=NULL;

struct Node* createNode()
{
	Node* ptr=(Node*)malloc(sizeof(Node));
	printf("Enter the value:\n");
	scanf("%d",&ptr->data);
	ptr->prev=NULL;
	ptr->next=NULL;
	return ptr;
}

void display()
{
	Node* ptr=createNode();
	Node* temp;
	if(start==NULL)
		start=ptr;
	else
	{
		Node*ptr1=start;
		while(ptr1->next!=NULL){
			temp=ptr1;
			ptr1=ptr1->next;
		}
		ptr1->next=ptr;
	}
}
void conected()
{
}