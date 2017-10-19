#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<errno.h>
int main(void)
{
int i =0;
char *p[3]={"ls","pwd","cal"};
while(i<3)
{
 if(fork()==0)
  execlp(p[i],p[i],NULL);
 else
 {
 wait(0);
 printf("\n%s sucess \n",p[i]);
 }
i++;
}
return 0;
}

