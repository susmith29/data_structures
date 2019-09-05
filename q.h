//header file for implementation of queue in linked list
struct queue
{
struct node*front;
struct node*rear;
};
struct node
{
int data;
struct node*next;
};
int isfull(struct queue*);
int isempty(struct queue*);
int enqueue(struct queue*,int);
int dequeue(struct queue*,int*);
int peekfront(struct queue*,int*);
int peekrear(struct queue*,int*);
