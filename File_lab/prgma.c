#include<stdio.h>
#include<fcntl.h>
main()
{
	int fd,i; char c;
	fd=open("xyz",O_RDONLY);
	i=lseek(fd,6,SEEK_SET);
	read(fd,&c,1);
	printf("%d%c",i,c);
	read(fd,&c,1);//read moves pointer by one itself.
	printf("%d%c",i,c);
}
