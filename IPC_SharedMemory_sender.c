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
int i=0;
char buff[100];
int shmid;
shmid=shmget((key_t)2345,sizeof(struct shared_area), IPC_CREAT|0666); //creates shared memory segment with key 2345, having size 1024 bytes. IPC_CREAT is used to create the shared segment if it does not exist. 0666 are the permisions on the shared segment
//printf("Key of shared memory is %d\n",shmid);
shared_memory=(struct shared_area *)shmat(shmid,NULL,0); //process attached to shared memory segment
//printf("Process attached at %p\n",shared_memory); //this prints the address where the segment is attached with this process
while(1)
{
    if(i==0)
    {
        if(shared_memory->flg == 2)
        {
            printf("Data from receiver is : %s\n",shared_memory->data);
        }
        printf("Enter some data to write to shared memory \n[[enter EXIT or exit to exit]]\n");
        gets(buff); //get some input from user
        if(strcmp(buff,"EXIT")==0 || strcmp(buff,"exit")==0)
        {
            shared_memory->flg = 0;
            return 0;
        }
        shared_memory->flg=1;
        strcpy(shared_memory->data,buff); //data written to shared memory
        //printf("You wrote : %s\n",(char *)shared_memory);
        i++;
    }
    if(i==1)
    {
        if(shared_memory->flg == 0)
        {
            printf("Receiver exited\n");
            return 0;
        }
        if(shared_memory->flg == 2)
        {
            if(shared_memory->flg == 2)
            {
                printf("Data from receiver is : %s\n",shared_memory->data);
            }
            printf("Enter some data to write to shared memory \n[[enter EXIT or exit to exit]]\n");
            gets(buff); //get some input from user
            if(strcmp(buff,"EXIT")==0 || strcmp(buff,"exit")==0)
            {
                shared_memory->flg = 0;
                return 0;
            }
            shared_memory->flg=1;
            strcpy(shared_memory->data,buff); //data written to shared memory
            //printf("You wrote : %s\n",(char *)shared_memory);
        }
    }
}
}
