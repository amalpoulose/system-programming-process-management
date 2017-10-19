#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<errno.h>
int main(int argc,char **argv)
{
	int i;
	char **p;
	execvp(argv[1],argv+1);
	return 0;
}
