//Reverse Of  a List
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
void CreateList()
{
	struct Node* ptr=createNode();
	
	if(start==NULL)
	{
		start=ptr;
	}
	else
	{
		Node* temp=start;
		while(temp->next!=NULL)
	   {
		   temp=temp->next;
	   }
		temp->next=ptr;
	    ptr->prev=temp;	   
	}
}
void display()
 {
	  struct Node* ptr=start;
	 // struct Node* ptr1;
	   if(start==NULL)
	   {
		  printf("\nList is empty\n");
	   }
	   else
	   {
	   while(ptr!=NULL)
	   {
		 // ptr1=ptr;
		    printf("%d\n",ptr->data);
		  ptr=ptr->next;
	   }

	  
	  /* while(ptr1!=NULL)
	   {
		  printf("%d\n",ptr1->data);
		  ptr1=ptr1->prev;
	   }*/
	  }
	 
 }
void reverse()
{
	Node* ptr=start;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	Node* ptr1=ptr;
	while(ptr1
		!=NULL)
	{
		 printf("%d\n",ptr1->data);
		ptr1=ptr1->prev;
	}
}
void main()
{
	int i=1;
	while(i)
	{
		printf("\nPress 1 for insert || Press 2 for reverse || Press 3 for display || Press any key for exit\n");
		int n;
		scanf("%d",&n);
		switch(n)
		{
		case 1:
			
			CreateList();
			break;
		case 2:
			reverse();
			break;
		case 3:
			display();
			break;
		default:
			i=0;
			break;

		}
	}

	getch();
}
