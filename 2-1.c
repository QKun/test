#include "stdio.h"
typedef struct student
{
	int id;
	char name[10];
	float score;
}Student;

int search(Student stu[],int n,int key)
{	
	int i;
	for(i=0; i<n; i++)
		if( stu[i].id == key)
			return i;
	return -1;
}

main()
{
	Student stu[4] = {{1004,"TOM",100},{1002,"LILY",95},{1001,"ANN",93},{1003,"LUCY",98}};
	int addr;
	addr = search(stu,4,1001);

	if(addr == -1)
	{
		printf("There is no this record\n");
		return;
	}

	printf("Student ID: %d\n",stu[addr].id);
	printf("Student name: %s\n",stu[addr].name);
	printf("Student score: %f\n",stu[addr].score);
	getche();
	return;
}