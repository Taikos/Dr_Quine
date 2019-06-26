#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
	int x;
	char *tmp;
	char *build;
	char *run;
	int fd;
	char *code;

	x = 5;
	if (x < 0)
		return (0);
	if (!strstr(getenv("_"), "./Sully_"))
		x++;
	asprintf(&tmp,"Sully_%d.c", x-1);
	asprintf(&build, "gcc -Wall -Werror -Wextra Sully_%d.c -o Sully_%d;", x-1, x-1);
	code = "#include <string.h>%c#include <stdlib.h>%c#include <stdio.h>%c#include <fcntl.h>%c#include <unistd.h>%c%cint main(void)%c{%c%cint x;%c%cchar *tmp;%c%cchar *build;%c%cchar *run;%c%cint fd;%c%cchar *code;%c%c%cx = %d;%c%cif (x < 0)%c%c%creturn (0);%c%cif (!strstr(getenv(%c_%c), %c./Sully_%c))%c%c%cx++;%c%casprintf(&tmp,%cSully_%cd.c%c, x-1);%c%casprintf(&build, %cgcc -Wall -Werror -Wextra Sully_%cd.c -o Sully_%cd;%c, x-1, x-1);%c%ccode = %c%s%c;%c%cfd = creat(tmp,S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH);%c%cif (fd > 0)%c%c{%c%c%cdprintf(fd,code,10,10,10,10,10,10,10,10,9,10,9,10,9,10,9,10,9,10,9,10,10,9,x-1,10,9,10,9,9,10,9,34,34,34,34,10,9,9,10,9,34,37,34,10,9,34,37,37,34,10,9,34,code,34,10,9,10,9,10,9,10,9,9,10,9,9,10,9,10,9,10,9,9,10,9,10,9,10,9,10,9,9,34,37,34,10,9,9,10,9,10,9,10,10);%c%c%cclose(fd);%c%c}%c%celse%c%c%creturn (-1);%c%csystem(build);%c%cif (x > 1)%c%c{%c%c%casprintf(&run, %c./Sully_%cd%c, x-1);%c%c%csystem(run);%c%c}%c%creturn (0);%c}%c";
	fd = creat(tmp,S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH);
	if (fd > 0)
	{
		dprintf(fd,code,10,10,10,10,10,10,10,10,9,10,9,10,9,10,9,10,9,10,9,10,10,9,x-1,10,9,10,9,9,10,9,34,34,34,34,10,9,9,10,9,34,37,34,10,9,34,37,37,34,10,9,34,code,34,10,9,10,9,10,9,10,9,9,10,9,9,10,9,10,9,10,9,9,10,9,10,9,10,9,10,9,9,34,37,34,10,9,9,10,9,10,9,10,10);
		close(fd);
	}
	else
		return (-1);
	system(build);
	if (x > 1)
	{
		asprintf(&run, "./Sully_%d", x-1);
		system(run);
	}
	return (0);
}
