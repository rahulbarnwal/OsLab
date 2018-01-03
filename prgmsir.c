#include<stdio.h>
main()
{
int p;
p=getpid();
fork();
if(p==getpid())
    printf("parent %d %d\n ",getpid(),getppid());
else
 {
    printf("Child %d %d\n ",getpid(),getppid());
    sleep(2);
    printf("child %d %d\n ",getpid(),getppid());
 }
sleep(1);
}
