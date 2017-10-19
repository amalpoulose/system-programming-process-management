#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<errno.h>
int main(void)
{
	int i=0;
	while(i<3)
	{
		if(fork()==0)
		{
			printf("child %d and id = %d parent id = %d\n",i+1,getpid(),getppid());
		}
		else
                break;
                
	        i++;
        }
        wait(0);
	return 0;
}
