#include<stdio.h>
#include<signal.h>

main(){
signal(SIGINT,SIG_DFL);
while(1)printf("Z");

}
