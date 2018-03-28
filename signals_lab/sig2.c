#include<stdio.h>
#include<signal.h>
void s();void k();
void s(){ printf("QQ\n"); signal(SIGINT,k);}
void k(){ printf("PP\n"); signal(SIGINT,s);}//signal setting changed to sig_dfl

main(){ signal(SIGINT,k); for(;;); }
