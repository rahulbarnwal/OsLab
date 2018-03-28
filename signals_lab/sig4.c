#include<stdio.h>
#include<signal.h>
int i=0;
void k();
void s(){i++;signal(SIGINT,k);}
void k()
{
 int j;
 for(j=0;j<=i;j++)printf("X"); printf("\n");i++; }//signal(SIGINT,s);}

main(){ signal(SIGINT,k); for(;;); }
