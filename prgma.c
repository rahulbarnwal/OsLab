#include<stdio.h>
main()
{
printf("X\n");
int x=fork();
printf("Y\n");
printf("%d %d %d\n",x,getpid(),getppid());
//fork returns child id
}
