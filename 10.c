#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<errno.h>
int main(void)
{
	int i=0,pid;
	char arr[4][10]={"ls","pwd","cal","date"};
	for(;i<3;i++)
	{
	        if((pid=fork())==0)
                 ;
		else
			break;
	}
        waitpid(pid,0,0);
	printf("\n");
	system(arr[i]);
	printf("chid %d id = %d parent id = %d\n",i+1,getpid(),getppid());
	wait(0);
	return 0;
}
