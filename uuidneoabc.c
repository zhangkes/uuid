#include<stdio.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define RETURN_FAIL -1
#define RETURN_OK	 0

#define MAXBUf 512

/*Delete the specified character*/
void delchar(char*src,char ch)
{ 
    char *m=src;
    char *n=src;
    while(*m)
    {
        if(*m!=ch)
            *n++=*m;
            m++;
    }
    *n='\0';
}

int uuid_generate(char *uuid)
{
	int fd;
	int buf[MAXBUf];
	if(!uuid)
	{
		return RETURN_FAIL;
	}
	fd = open("/proc/sys/kernel/random/uuid",O_RDONLY);
	if(fd == -1)
	{
		perror("fail to open\n");
		return RETURN_FAIL;
	}
	if(read(fd,buf,MAXBUf)==-1)
	{
		perror("read file fail\n");
		return RETURN_FAIL;
	}
	delchar(buf,'-');
	strcpy(uuid,buf);
	return RETURN_OK;
}
