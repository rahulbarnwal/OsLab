#include<stdio.h>
main()
{
int p=getpid();
fork();
if(p==getpid()) printf("X");
//fflush(stdout);
if(p==getppid()) printf("Y");
//sleep(2);
}
