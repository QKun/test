#include "stdio.h"
#define MaxSize 10
/*��̬˳���ĸ��ֲ���*/

/** ��˳����в���Ԫ�� */
/** ����Sqlist�����׵�ַ */
/** ����*len����ĳ��� */
/** ����i������Ԫ�ص�λ�� */
/** ����x���������Ԫ��ֵ */
void insertElem(int Sqlist[],int *len,int i,int x)
{
	int t;
	if(*len == MaxSize || i<1 || i>*len+1)
	{
		printf("This insert is illegal\n");
		return;
	}			/*�Ƿ�����*/
	for(t=*len-1;t>=i-1;t--)
		Sqlist[t+1]=Sqlist[t];
	Sqlist[i-1]=x;
	*len=*len+1;		/*����1*/
}

/** ��˳�����ɾ��Ԫ�� */
/** ����Sqlist�����׵�ַ */
/** ����*len����ĳ��� */
/** ����i������Ԫ�ص�λ�� */
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

/** ���Ժ��� */
main()
{
	int Sqlist[MaxSize];
	int len;
	int i;
	printf("Please input six integer number\n");

	for(i=0;i<6;i++)
		scanf("%d",&Sqlist[i]);			/*�Ӽ�������6����*/	
	len=6;
	for(i=0;i<len;i++)
		printf("%d",Sqlist[i]);			/*���˳����е�6������*/
	printf("\nThe spare length is %d\n",MaxSize - len);		/*��ʾ���е�ʣ��ռ�*/
	
	insertElem(Sqlist,&len,3,0);
	for(i=0;i<len;i++)
		printf("%d",Sqlist[i]);
	printf("\nThe spare length is %d\n",MaxSize - len);		/*��ʾ���е�ʣ��ռ�*/

	insertElem(Sqlist,&len,11,0);
	DelElem(Sqlist,&len,6);
	for(i=0;i<len;i++)
		printf("%d",Sqlist[i]);
	printf("\nThe spare length is %d\n",MaxSize - len);
}

