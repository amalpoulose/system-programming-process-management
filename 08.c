#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<errno.h>
int main(void)
{
int i;
char arr[4][10]={"ls","pwd","cal","date"};
printf("\n");
system(arr[0]);
for(i=0;i<3;i++)
{
 if(fork()==0)
 {
  printf("\n");
  system(arr[i+1]);
  printf("chid %d id = %d parent id = %d\n",i+1,getpid(),getppid());
 }else
 break;
}
wait(0);
return 0;
}
