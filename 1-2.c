#include <stdio.h>
#include <conio.h>
#define MaxSize 10
typedef int ElemType;	/*��int����ΪElementType*/

typedef struct
{
	int *elem;
	int length;
	int listsize;
}	Sqlist;

/** ��ʼ��һ��˳��� */
/** ����L��Sqlist���͵�ָ�� */
void initSqlist(Sqlist *L)
{
	L->elem=(int *)malloc(MaxSize*sizeof(ElemType));
	if(!L->elem) exit(0);
	L->length=0;
	L->listsize=MaxSize;
}

/** ��˳����в���Ԫ�� */
/** ����L��Sqlist���͵�ָ�� */
/** ����i������Ԫ�ص�λ�� */
/** ����item�������Ԫ�� */
void InsertElem(Sqlist *L,int i,ElemType item)
{
	/** ��˳���L�е�i��λ���ϲ���Ԫ��item */
	ElemType *base,* insertPtr,*p;
	if(i<1 || i>L->length+1) exit(0);
	if(L->length>=L->listsize)
	{
		base=(ElemType*)realloc(L->elem,(L->listsize+10)*sizeof(ElemType));

	}
}
