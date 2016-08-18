#ifndef _UUIDNEOABC_H_
#define _UUIDNEOABC_H_

#ifdef __cplusplus
extern "C"{
#endif

#define RETURN_FAIL -1
#define RETURN_OK	 0

#define MAXBUf 512
/*
 *Funtion：You will get uuid string without '-'; 
 *@example
 *	uuid:8cb95419-252c-4889-a49c-87940a990c7c
 *	uuid:8cb95419252c4889a49c87940a990c7c
 *If the normal exit, return this RETURN_OK.
 *@returns RETURN_OK 
 */
int uuid_generate(char *uuid);

#ifdef __cplusplus
};
#endif

#endif