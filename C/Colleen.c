#include <stdio.h>

/*
	Dr. Quine project is able to display its own source code, like magic.
*/

int	this_is_just_for_fun(void)
{
	return (0);
}

int	main(void)
{
	/*
		I am the comment inside the main function :p
	*/
	char *code="#include <stdio.h>%c%c/*%c%cDr. Quine project is able to display its own source code, like magic.%c*/%c%cint%cthis_is_just_for_fun(void)%c{%c%creturn (0);%c}%c%cint%cmain(void)%c{%c%c/*%c%c%cI am the comment inside the main function :p%c%c*/%c%cchar *code=%c%s%c;%c%cprintf(code,10,10,10,9,10,10,10,9,10,10,9,10,10,10,9,10,10,9,10,9,9,10,9,10,9,34,code,34,10,9,10,9,10,9,10,10);%c%cthis_is_just_for_fun();%c%creturn (0);%c}%c";
	printf(code,10,10,10,9,10,10,10,9,10,10,9,10,10,10,9,10,10,9,10,9,9,10,9,10,9,34,code,34,10,9,10,9,10,9,10,10);
	this_is_just_for_fun();
	return (0);
}
