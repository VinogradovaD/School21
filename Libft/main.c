#include <stdio.h>
#include <stdlib.h> //это удалить
#include <string.h> //тоже удалить

int  count(char const *str, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);


int main()
{
	char *str;
	str = "one,,,two,three,,,,,four,five";
	printf("%d", count(str, ','));
	return 0;
}

int  count(char const *s, char c)
{
	int count;
	int last;

	count = 0;
	last = 1;
	while (*s != '\0')
	{
		if (*s != c && last == 1)
		{
			count++;
			last = 0;
		}
		if (*s == c && last == 0)
			last = 1;
		s++;

	}
	return (count);
}

char **ft_split(char const *s, char c)
{
	char **pointer;
	int words_count;
	int p_n;
	int n;

	p_n = 0;
	n = 0;
	words_count = count(s, c);
	if (words_count == 0)
		return (NULL);
	pointer = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (!pointer)
		return (NULL);
	while (p_n < words_count);
	{
		while(*s)
		{

			while(s[n] )

			pointer[p_n] = ft_substr(s, )

		}
	}
	pointer[p_n] = '\0';
}

//удалить
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	sub_len;
	size_t	s_len;
	size_t	i;

	if (s == NULL)
		return (NULL);
	s_len = strlen(s);
	if (start >= s_len)
		return (NULL);
	if (len > s_len)
		sub_len = s_len - start;
	else
		sub_len = len;
	i = 0;
	substring = malloc(sizeof(char) * sub_len + 1);
	if (substring == NULL)
		return (NULL);
	while (i < sub_len)
	{
		substring[i] = s[i + start];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
//


int word_len(char *s, int n, char c)
{
	int i;
	int len;
	int last;

	i = 0;
	last = 1;
	while(*s && i!= n)
	{
		if (*s != c && last == 1)
		{
			last = 0;
			len++;
		}
		if(*s == c && last == 0)
		{
			len = 0;
			if (i == n)
				return (len);
		}
		s++;
	}
}