## Часть 1

| Функция                                                                                      | Прототип               | Описание                                      |
| -------------------------------------------------------------------------------------------- |----------------------- | --------------------------------------------- |
|[ft_isalpha](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_isalpha.c)| int	ft_isalpha(int ch)| Проверяет является ли входной параметр буквой.|
|[ft_isdigit](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_isdigit.c)| int	ft_isdigit(int ch)| Проверяет является ли входной параметр цифрой.|
|[ft_isalnum](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_isalnum.c)| int	ft_isalnum(int ch)| Проверяет является ли входной параметр буквой или цифрой.|
|[ft_isascii](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_isascii.c)| int	ft_isascii(int ch)| Проверяет является ли входной параметр элементом ascii таблицы.|
|[ft_isprint](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_isprint.c)| int	ft_isprint(int ch)| Проверяет является ли входной параметр печатаемым символом.
|[ft_strlen](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_strlen.c)  | size_t	ft_strlen(const char \*s)| Возвращает длину входной строки.|
|[ft_memset](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_memset.c)  | void	\*ft_memset(void \*buf, int ch, size_t count)| Заполняет count байтов блока памяти по указателю buf символом сh.|
|[ft_bzero](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_bzero.c)    | void	ft_bzero(void \*buf, size_t count) | Заполняет count байтов блока памяти по указателю buf нулевым значением.|
|[ft_memcpy](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_memcpy.c)  | void	\*ft_memcpy(void \*dst, const void \*src, size_t n)| Копирует n байт из первого блока памяти, на который указывает параметр src, во второй блок памяти, на который указывет параметр dst.|
|[ft_memmove](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_memmove.c)| void	\*ft_memmove(void \*dst, const void \*src, size_t len)| Копирует так же, как и ft_memcpy, но при этом массивы могу пересекаться. 
|[ft_strlcpy](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_strlcpy.c) | size_t	ft_strlcpy(char \*dst, const char \*src, size_t dstsize)| Копирует из строки src в буфер dst не более чем (dstsize - 1) байт символов, в конец строки устранавливает нулевой символ. Возвращае  размер строки по адресу src.|
|[ft_strlcat](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_strlcat.c) | size_t	ft_strlcat(char \*dst, const char \*src, size_t dstsize)| Копирует строку src в конец строки dst. Возвращает суммарную длину строк по адресам src и dst.|
|[ft_toupper](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_toupper.c) | int	ft_toupper(int ch)| Преобразует буквы из нижнего ригистра в верхний.|
|[ft_tolower](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_tolower.c) | int	ft_tolower(int ch)| Преобразует буквы из верхнего регистра в нижний.|
|[ft_strchr](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_strchr.c)   | char	\*ft_strchr(const char \*s, int c)| Возвращает первое вхождения символа c в строку с указателем s.|
|[ft_strrchr](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_strrchr.c) | char	\*ft_strrchr(const char \*s, int c)| Возвращает последнее вхождение символа c в строку с указателем s.|
|[ft_strncmp](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_strncmp.c) | int	ft_strncmp(const char \*str1, const char \*str2, size_t n)| Сравнивает первые n символов строки с указателем str1 с первыми n символами строки с указателем str2.|
|[ft_memchr](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_memchr.c)   | void	\*ft_memchr(const void \*arr, int c, size_t n)| Сравнивает первые n символов строки с указателем arr с символом c и возвращает адрес первого совпадения, либо 0.|
|[ft_memcmp](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_memcmp.c)   | int	ft_memcmp(const void \*buf1, const void \*buf2, size_t count)| Сравнивает первые count символов строки с указателем buf1 и с первыми count символами строки с указателем buf2, возвращает 0, если они равны, их разницу - в другом случае.|
|[ft_strnstr](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_strnstr.c) | char	\*ft_strnstr(const char \*haystack, const char \*needle, size_t len)| Ищет строку с указателем needle среди первых len символовом строки с указателем haystack.|
|[ft_atoi](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_atoi.c)       | int	ft_atoi(const char \*str)| Конвертирует строки в числовой вид.|
|[ft_calloc](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_calloc.c)   |void	\*ft_calloc(size_t nitems, size_t size)| Выделяет память, для nitems элементов размера size, все биты распределенной памяти инициализируются нулями.|
|[ft_strdup](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_strdup.c)   | char	\*ft_strdup(const char \*str)| Создает дубликат входной строки.|


## Часть 2

| Функция         | Прототип      | Описание      |
| --------------- |---------------|---------------|
|[ft_substr]()    |
|[ft_strjoin]()   |
|[ft_strtrim]()   |
|[ft_split]()     |
|[ft_itoa]()      |
|[ft_strmapi]()   |
|[ft_striteri]()  |
|[ft_putchar_fd]()|
|[ft_putstr_fd]() |
|[ft_putendl_fd]()|
|[ft_putnbr_fd]() |


## Бонусы

| Функция           | Прототип      | Описание      |
| ----------------- |---------------|---------------|
|[ft_lstnew]()      |
|[ft_lstadd_front]()|
|[ft_lstsize]()     |
|[ft_lstlast]()     |
|[ft_lstadd_back]() |
|[ft_lstdelone]()   |
|[ft_lstclear]()    |
|[ft_lstiter]()     |
|[ft_lstmap]()      |


