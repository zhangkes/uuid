#include<stdio.h>
#include"../uuidneoabc.h"

int main(void)
{
	char uuid[37];
	if(uuid_generate(uuid)!=RETURN_OK)
	{
		printf("generate uuid fail\n");
		return -1;
	}
	printf("uuid:%s\n",uuid);
	return 0;
}