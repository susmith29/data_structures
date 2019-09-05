#include<stdio.h>
#include "q.h"
#include<stdlib.h>
int isfull(struct queue*q)
{
struct node*newnode=(struct node*)malloc(sizeof(struct node));
if(!newnode)
return 0;
else
return 1;
}
int isempty(struct queue*q)
{
if(!q->front)
return 1;
else 
return 0;
}
int enqueue(struct queue*q,int data)
//inserting at ending
{
if(isfull(q))
return 0;
struct node*newnode=(struct node*)malloc(sizeof(struct node));
if(!newnode)
return 0;
newnode->data=data;
newnode->next=NULL;
if(!q->front)
//inserting the very first element
q->front=newnode;
else
{
q->rear->next=newnode;
q->rear=newnode;
}
return 1;
}
int dequeue(struct queue*q,int*data)
{
if(isempty(q))
return 0;
*data=q->front->data;
struct node*temp=q->front;
if(q->front==q->rear)
q->rear=NULL;
q->front=q->front->next;
free(temp);
return 1;
}
int peekfront(struct queue*q,int*data)
{
if(isempty(q))
return 0;
*data=q->front->data;
return 1;
}


int peekrear(struct queue*q,int*data)
{
if(isempty(q))
return 0;
*data=q->rear->data;
return 1;
}
