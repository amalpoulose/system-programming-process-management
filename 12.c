#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>

int main(void)
{
	int i,delay[3];
	srand(getpid());
	for(i=0;i<3;i++)
		delay[i]=rand()%10+1;
	for(i=1;i<4;i++)
		if(fork()==0)
		{
			printf("Child %d of id %d &  parent id =%d  sleeping for %d\n",i,getpid(),getppid(),delay[i-1]);
			sleep(delay[i-1]);
			exit(i); 
		}
	int s;
	while(wait(&s)!=-1)
	{       
		printf("-------------------------------------------\n");
		printf("Child %d exits\n",s>>8);
                if(s>>8==2)
                {
                   printf("Parent exiting............\n");
                   return;
                }
	}
	return 0;
}

 
