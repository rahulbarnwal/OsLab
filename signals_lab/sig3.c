#include<stdio.h>
#include<signal.h>
#include <stdlib.h>
void u(){}
void k(){ printf("Do you want to terminate\n"); int a; scanf("%d",&a); if(a==0)exit(0);   }

main(){ signal(SIGINT,k); for(;;); }
