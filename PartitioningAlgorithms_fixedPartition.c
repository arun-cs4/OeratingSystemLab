#include <stdio.h>
struct part
	{
		int process;
		int totalSpace;
		int freeSpace;
	}partition[8];

void internalFragmentation()
{
	int suminternal=0;
	for(int i=0;i<8;i++)
	{
		if(partition[i].process != -1)
		{
			suminternal=suminternal+partition[i].freeSpace;
		}
	}
	printf("Internal Fragmentation is %d KB\n",suminternal);
}

void main()
{
	int i,j,num,n,ps,flag,best,bestPartition;
	printf ("Total memory size is : 500KB\n");
	printf("the partitions are\n");
	printf("-------------------\n");
	printf("Partition 0 : 10 KB\n");
	partition[0].totalSpace=10;
	printf("Partition 1 : 20 KB\n");
	partition[1].totalSpace=20;
	printf("Partition 2 : 30 KB\n");
	partition[2].totalSpace=30;
	printf("Partition 3 : 50 KB\n");
	partition[3].totalSpace=50;
	printf("Partition 4 : 60 KB\n");
	partition[4].totalSpace=60;
	printf("Partition 5 : 80 KB\n");
	partition[5].totalSpace=80;
	printf("Partition 6 : 100 KB\n");
	partition[6].totalSpace=100;
	printf("Partition 7 : 150 KB\n");
	partition[7].totalSpace=150;
	printf("enter the number of processes\n");
	scanf("%d",&num);
	int prc[num];
	if(num<=8)
		n=num;
	else
		n=8;
	for(i=0;i<n;i++)
	{
		printf("Enter size for process %d in KB\n",i);
		scanf("%d",&prc[i]);
	}
	//First Fit
	partition[0].process=-1;
	partition[1].process=-1;
	partition[2].process=-1;
	partition[3].process=-1;
	partition[4].process=-1;
	partition[5].process=-1;
	partition[6].process=-1;
	partition[7].process=-1;
	printf("First Fit Algorithm\n");
	for(i=0;i<n;i++)
	{
		flag=0;
		ps=prc[i];
		for(j=0;j<8;j++)
		{
			if((partition[j].process==-1)&&(ps<=partition[j].totalSpace))
			{
				partition[j].process=i;
				partition[j].freeSpace=partition[j].totalSpace-ps;
				printf("Process %d is allocated at Partition %d\n",i,j);
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("process %d can not be allocated\n",i);
	}
	if(num>n)
	{
		for(int k=n;k<num;k++)
		{
			printf("process %d can not be allocated \n",k);
		}
	}
	internalFragmentation();
	//best fit
	partition[0].process=-1;
	partition[1].process=-1;
	partition[2].process=-1;
	partition[3].process=-1;
	partition[4].process=-1;
	partition[5].process=-1;
	partition[6].process=-1;
	partition[7].process=-1;
	printf("Best Fit Algorithm\n");
	for(i=0;i<n;i++)
	{
		best=160;
		bestPartition=-1;
		ps=prc[i];
		for(j=0;j<8;j++)
		{
			if((partition[j].process==-1)&&(ps<=partition[j].totalSpace))
			{
				if(partition[j].totalSpace<best)
				{
					best=partition[j].totalSpace;
					bestPartition=j;
				}
			}
		}
		if(bestPartition==-1)
			printf("process %d can not be allocated\n",i);
		else
		{
			partition[bestPartition].process=i;
			partition[bestPartition].freeSpace=partition[bestPartition].totalSpace-ps;
			printf("Process %d is allocated at Partition %d\n",i,bestPartition);
		}
	}
	if(num>n)
	{
		for(int k=n;k<num;k++)
		{
			printf("process %d can not be allocated \n",k);
		}
	}
	internalFragmentation();
	//worst fit
	partition[0].process=-1;
	partition[1].process=-1;
	partition[2].process=-1;
	partition[3].process=-1;
	partition[4].process=-1;
	partition[5].process=-1;
	partition[6].process=-1;
	partition[7].process=-1;
	printf("Worst Fit Algorithm\n");
	for(i=0;i<n;i++)
	{
		best=5;
		bestPartition=-1;
		ps=prc[i];
		for(j=0;j<8;j++)
		{
			if((partition[j].process==-1)&&(ps<=partition[j].totalSpace))
			{
				if(partition[j].totalSpace>best)
				{
					best=partition[j].totalSpace;
					bestPartition=j;
				}
			}
		}
		if(bestPartition==-1)
			printf("process %d can not be allocated\n",i);
		else
		{
			partition[bestPartition].process=i;
			partition[bestPartition].freeSpace=partition[bestPartition].totalSpace-ps;
			printf("Process %d is allocated at Partition %d\n",i,bestPartition);
		}
	}
	if(num>n)
	{
		for(int k=n;k<num;k++)
		{
			printf("process %d can not be allocated \n",k);
		}
	}
	internalFragmentation();
}
