#include"circular.h"
#include<stdio.h>
int isfull(struct queue*q)
{
if(q->rear=(q->front-1)%SIZE-1)
return 1;
else 
return 0;
}
int isempty(struct queue*q)
{
if(q->rear==-1&&q->front==-1)
return 1;
else
return 0;
}
int enqueue(struct queue*q,int data)
{
if(isfull(q))
return 0;
q->rear=(q->rear+1)%SIZE;
q->arr[q->rear]=data;
if(q->front==-1)
q->front=0;
return 1;
}
int dequeue(struct queue*q,int*data)
{
if(isempty(q))
return 0;
*data=q->arr[q->front];
if(q->front=q->rear)
//deleting the only  element present in the queue
q->front=q->rear=-1;
q->front=(q->front+1)%SIZE;
return 1;
}
int peekfront(struct queue*q,int*data)
{
if(isempty(q))
return 0;
*data=q->arr[q->front];
return 1;
}
int peekrear(struct queue*q,int*data)
{
if(isempty(q))
return 0;
*data=q->arr[q->rear];
return 1;
}







