#include<stdio.h>
#include<signal.h>

void u()
{	//printf("TT\n"); }
}

void m()
{
	signal(SIGFPE,u);
	int a,b;
	printf("Do you want to terminate\n");
	scanf("%d",&a);
	b=3/a;
}

main()
{	signal(SIGINT,m);
	for(;;);
}
