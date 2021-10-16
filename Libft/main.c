#include "libft.h"
#include <stdio.h>
#include <string.h>
int main()
{
	// Массив источник данных
	char app[1024]="вторая строка ";

	// Массив приемник данных
	char dst[1024]="первая строка";

	// Добавляем строку из массива src в массив dst.
	strcat (dst, app);

	// Вывод массива dst на консоль
	printf ("dst: %s\n",dst);

	return 0;
}

