#include <stdio.h>
#include <conio.h>
#define MaxSize 10
typedef int ElemType;	/*将int定义为ElementType*/

typedef struct
{
	int *elem;
	int length;
	int listsize;
}	Sqlist;

/** 初始化一个顺序表 */
/** 参数L：Sqlist类型的指针 */
void initSqlist(Sqlist *L)
{
	L->elem=(int *)malloc(MaxSize*sizeof(ElemType));
	if(!L->elem) exit(0);
	L->length=0;
	L->listsize=MaxSize;
}

/** 向顺序表中插入元素 */
/** 参数L：Sqlist类型的指针 */
/** 参数i：插入元素的位置 */
/** 参数item：插入的元素 */
void InsertElem(Sqlist *L,int i,ElemType item)
{
	/** 向顺序表L中第i个位置上插入元素item */
	ElemType *base,* insertPtr,*p;
	if(i<1 || i>L->length+1) exit(0);
	if(L->length>=L->listsize)
	{
		base=(ElemType*)realloc(L->elem,(L->listsize+10)*sizeof(ElemType));

	}
}
