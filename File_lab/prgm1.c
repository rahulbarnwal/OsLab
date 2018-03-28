#include<stdio.h>
#include<fcntl.h>

main()
{
	int fd=open("file1",O_RDONLY);
	char c='1';
	int j;
   	while(c!='a')
	{
		read(fd,&c,1);
		if(c=='\n')break;	
	}
	if(c=='\n')printf("No a is there in the file");
	else
	{
		j=lseek(fd,1,SEEK_CUR);
		printf("%d",j-1);
	}
}
