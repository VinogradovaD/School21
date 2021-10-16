#include "libft.h"
#include <stdio.h>  // Для printf
#include <string.h> // Для strrchr
int main (void)
{
	char str1[16]="1234967890";
	char str2[16]="";

	printf("%d", strncmp(str1, str2, 5));
	return 0;
}



