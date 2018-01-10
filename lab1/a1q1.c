#include<stdio.h>
main()
{
int p=getpid();
printf("parent %d %d\n",getpid(),getppid());
fork();
if(p==getpid())
{
 printf("parent %d %d\n", getpid(),getppid());
}
else
{
 sleep(2);
 printf("%d %d\n ", getpid(),getppid());
}
}

