#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<errno.h>
int main(int argc,char **argv)
{
int s=0;
if(argc!=3)
{
 printf("Usage : ./a.out integer1 integer2\n");
 return;
}
if(fork()==0)
{
 s=atoi(argv[1])+atoi(argv[2]);
 exit(s);
}
else
{
int *p=malloc(sizeof(int));
 wait(p);
 printf("\n\n%s + %s = %d\n",argv[1],argv[2],*p/255);
}
return 0;
}
