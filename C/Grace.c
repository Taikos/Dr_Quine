#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/*
	Dr. Quine project is able to display its own source code, like magic.
*/

#define RESULT "Grace_kid.c"
#define CONTENT "#include <stdio.h>%c#include <fcntl.h>%c#include <unistd.h>%c%c/*%c%cDr. Quine project is able to display its own source code, like magic.%c*/%c%c#define RESULT %c%s%c%c#define CONTENT %c%s%c%c#define MACRO_GRACE()int main(void){int fd;fd = creat(RESULT,S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH);if (fd > 0){dprintf(fd,CONTENT,10,10,10,10,10,9,10,10,10,34,RESULT,34,10,34,CONTENT,34,10,10,10);close (fd);}return (0);}%cMACRO_GRACE()%c"
#define MACRO_GRACE()int main(void){int fd;fd = creat(RESULT,S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH);if (fd > 0){dprintf(fd,CONTENT,10,10,10,10,10,9,10,10,10,34,RESULT,34,10,34,CONTENT,34,10,10,10);close (fd);}return (0);}
MACRO_GRACE()
