#include<stdio.h>
#include<fcntl.h>

main()
{
	int fd=open("file2",O_RDONLY);	
	char c;
	/**c='1';
	int j=lseek(fd,-1,SEEK_END);
	printf("AASize of file=%d\n",j+1);
	
	lseek(fd,0,SEEK_SET);	
	int i;
        char a[100];
	read(fd,a,j+1);

	for(i=0;i<j+1;i++)printf("%c",a[i]);
	*/
	
	char a[100];
	int size=read(fd,a,100000);
	int i;
	for(i=0;i<size;i++)printf("%c",a[i]);
	//or we can use read(fd,a,100000) this returns number of characters actually read
	
} 	
	
