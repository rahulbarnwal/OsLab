#include<stdio.h>
#include<signal.h>
void k()
 {  printf("AA\n");  }
void d()
 {  printf("DD\n");  }
main()
{ 	signal(SIGINT,k);
	signal(SIGQUIT,d);
	for(;;);
}
