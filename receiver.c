#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/shm.h>
#include<string.h>
struct shared_area
{
    int flg;
    char data[100];
};
int main()
{
struct shared_area * shared_memory;
int i;
char buff[100];
int shmid;
shmid=shmget((key_t)2345,sizeof(shared_memory), IPC_CREAT|0666);
//printf("Key of shared memory is %d\n",shmid);
shared_memory=(struct shared_area *)shmat(shmid,NULL,0); //process attached to shared memory segment
//printf("Process attached at %p\n",shared_memory);
while(1)
{
    if(i==0)
    {
        if(shared_memory->flg==1)
        {
            printf("Data from sender is : %s\n",shared_memory->data);
        }
        printf("Enter some data to write to shared memory\n[[enter EXIT or exit to exit]]\n");
        gets(buff);
        if(strcmp(buff,"EXIT")==0 || strcmp(buff,"exit")==0)
        {
            shared_memory->flg = 0;
            return 0;
        }
        shared_memory->flg=2;
        strcpy(shared_memory->data,buff);
        i++;
    }
    if(i==1)
    {
        if(shared_memory->flg == 0)
        {
            printf("Sender exited\n");
            return 0;
        }
        if(shared_memory->flg==1)
        {
            if(shared_memory->flg==1)
            {
                printf("Data from sender is : %s\n",shared_memory->data);
            }
            printf("Enter some data to write to shared memory\n[[enter EXIT or exit to exit]]\n");
            gets(buff);
            if(strcmp(buff,"EXIT")==0 || strcmp(buff,"exit")==0)
            {
                shared_memory->flg = 0;
                return 0;
            }
            shared_memory->flg=2;
            strcpy(shared_memory->data,buff);
        }
    }
}
}

