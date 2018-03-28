#include<stdio.h>
#include<signal.h>
int i=0;
void k(){ i++; if(i==5)signal(SIGINT,SIG_DFL); }//signal setting changed to sig_dfl

main(){ signal(SIGINT,k); for(;;); }
