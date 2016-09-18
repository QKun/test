#include "stdio.h"
typedef char ElemType;
typedef struct QNode
{
	ElemType data;
	struct QNode *next;
}QNode,*QueuePtr;
typedef struct
{
	QueuePtr front;
	QueuePtr rear;
}LinkQueue;

initQueue(LinkQueue *q)
{
	q->front = q->rear = (QueuePtr)malloc(sizeof(QNode));

	if(!q->front) exit(0);
	q->front->next = NULL;
}

EnQueue(LinkQueue *q,ElemType e)
{
	QueuePtr p;
	p = (QueuePtr)malloc(sizeof(QNode));
	if(!q->front) exit(0);
	p->data = e;
	p->next = NULL;
	q->rear->next = p;
	q->rear = p;
}
DeQueue(LinkQueue *q, ElemType *e)
{
	QueuePtr p;
	if(q->front == q->rear) return;
	p = q->front->next;
	*e = p->data;
	q->front->next = p->next;
	if(q->rear == p) q->rear = q->front;
	free(p);
}

DestroyQueue(LinkQueue *q)
{
	while(q->front)
	{
		q->rear = q->front->next;
		free(q->front);
		q->front = q->rear;
	}
}

main()
{
	ElemType e;
	LinkQueue q;
	initQueue(&q);
	printf("Please input a string into a queue\n");
	scanf("%c",&e);
	while(e!='@')
	{
		EnQueue(&q,e);
		scanf("%c",&e);
	}
	printf("The string into the queue is \n");
	while(q.front != q.rear)
	{
		DeQueue(&q,&e);
		printf("%c",e);
	}
	printf("\n");
	DestroyQueue(&q);
	getche();
}

