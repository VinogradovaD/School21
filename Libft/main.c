#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *str = "1";
	int *num = (int *)str;
	//printf ("%d\n",atoi (Str));
	printf("%d", &num);
	return 0;

}