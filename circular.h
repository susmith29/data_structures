#define SIZE 100
struct queue
{
int arr[SIZE];
int front,rear;
};
int isfull(struct queue*);
int isempty(struct queue*);
int enqueue(struct queue*,int);
int dequeue(struct queue*,int*);
int peekfront(struct queue*,int*);
int peekrear(struct queue*,int*);
