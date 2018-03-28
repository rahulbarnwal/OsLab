#include<stdio.h>
#include<fcntl.h>

main()
{
	int fd=open("file1",O_RDONLY);
	char c;
	/** c='1';
	int j=lseek(fd,-1,SEEK_END);
	printf("AASize of file=%d\n",j+1);
	*/
	int count=0;
   	while(c!='\n')
	{
		read(fd,&c,1);count++;
	}
	printf("\nSize of file=%d\n",count);
}
