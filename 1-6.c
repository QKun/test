#include "stdio.h"

typedef struct BiTNode 
{
	char data;
	struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

CreateBiTree(BiTree *T)
{
	char c;
	scanf("%c",&c);
	if(c == ' ') *T = NULL;
	else
	{
		*T = (BiTNode *)malloc(sizeof(BiTNode));
		(*T)->data = c;
		CreateBiTree(&((*T)->lchild));
		CreateBiTree(&((*T)->rchild));
	}
}

visit(char c,int level)
{
	if(c == 'D')
	{
		printf("%c is at %dth level of BiTree\n",c,level);
	}
}

PreOrderTraverse(BiTree T,int level)
{
	if(T)
	{
		visit(T->data,level);
		PreOrderTraverse(T->lchild,level+1);
		PreOrderTraverse(T->rchild,level+1);
	}
}

main()
{
	int level = 1;
	BiTree T = NULL;
	CreateBiTree(&T);
	PreOrderTraverse(T,level);
	getche();
}

