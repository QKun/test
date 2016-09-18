#include "stdio.h"
#define MaxSize 10
/*静态顺序表的各种操作*/

/** 向顺序表中插入元素 */
/** 参数Sqlist：表首地址 */
/** 参数*len：表的长度 */
/** 参数i：插入元素的位置 */
/** 参数x：待插入的元素值 */
void insertElem(int Sqlist[],int *len,int i,int x)
{
	int t;
	if(*len == MaxSize || i<1 || i>*len+1)
	{
		printf("This insert is illegal\n");
		return;
	}			/*非法插入*/
	for(t=*len-1;t>=i-1;t--)
		Sqlist[t+1]=Sqlist[t];
	Sqlist[i-1]=x;
	*len=*len+1;		/*表长加1*/
}

/** 向顺序表中删除元素 */
/** 参数Sqlist：表首地址 */
/** 参数*len：表的长度 */
/** 参数i：插入元素的位置 */
void DelElem(int Sqlist[],int *len,int i)
{
	int j;
	if(i<1 || i>len)
	{
		printf("This delete is illegal");
		return;
	}
	for(j=i;j<=*len-1;j++)
		Sqlist[j-1]=Sqlist[j];
	*len=*len-1;
}

/** 测试函数 */
main()
{
	int Sqlist[MaxSize];
	int len;
	int i;
	printf("Please input six integer number\n");

	for(i=0;i<6;i++)
		scanf("%d",&Sqlist[i]);			/*从键盘输入6个数*/	
	len=6;
	for(i=0;i<len;i++)
		printf("%d",Sqlist[i]);			/*输出顺序表中的6个整数*/
	printf("\nThe spare length is %d\n",MaxSize - len);		/*显示表中的剩余空间*/
	
	insertElem(Sqlist,&len,3,0);
	for(i=0;i<len;i++)
		printf("%d",Sqlist[i]);
	printf("\nThe spare length is %d\n",MaxSize - len);		/*显示表中的剩余空间*/

	insertElem(Sqlist,&len,11,0);
	DelElem(Sqlist,&len,6);
	for(i=0;i<len;i++)
		printf("%d",Sqlist[i]);
	printf("\nThe spare length is %d\n",MaxSize - len);
}

