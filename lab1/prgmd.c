#include<stdio.h>
main()
{
int i,p=getpid(); fork();
for(i=1;i<10000000;i++)
    if(p==getpid())
          printf("X");
    else printf("Y");
} 
