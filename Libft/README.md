## Часть 1

| Функция                                                                                      | Прототип               | Описание                                      |
| -------------------------------------------------------------------------------------------- |----------------------- | --------------------------------------------- |
|[ft_isalpha](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_isalpha.c)| int	ft_isalpha(int ch)| Проверяет является ли входной параметр буквой.|
|[ft_isdigit](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_isdigit.c)| int	ft_isdigit(int ch)| Проверяет является ли входной параметр цифрой.|
|[ft_isalnum](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_isalnum.c)| int	ft_isalnum(int ch)| Проверяет является ли входной параметр буквой или цифрой.|
|[ft_isascii](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_isascii.c)| int	ft_isascii(int ch)| Проверяет является ли входной параметр элементов ascii таблицы.|
|[ft_isprint](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_isprint.c)| int	ft_isprint(int ch)| Проверяет является ли входной параметр печатаемым символом.
|[ft_strlen](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_strlen.c)  | size_t	ft_strlen(const char \*s)| Возвращает длину входной строки.|
|[ft_memset](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_memset.c)  | void	\*ft_memset(void \*buf, int ch, size_t count)| Заполняет count байтов блока памяти по указателю buf символом сh.|
|[ft_bzero](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_bzero.c)    | void	ft_bzero(void \*buf, size_t count) | Заполняет count байтов блока памяти по указателю buf нулевым значением.|
|[ft_memcpy](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_memcpy.c)  | void	\*ft_memcpy(void \*dst, const void \*src, size_t n)| Копирует n байт из первого блока памяти, на который указывает параметр src, во второй блок памяти, на который указывет параметр dst.|
|[ft_memmove](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_memmove.c)| void	\*ft_memmove(void \*dst, const void \*src, size_t len)| Копирует так же, как и ft_memcpy, но при этом массивы могу пересекаться. 
|[ft_strlcpy](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_strlcpy.c) | size_t	ft_strlcpy(char \*dst, const char \*src, size_t dstsize)| Копирует из строки src в буфер dst не более чем dstsize - 1 байт символов, в конец строки устранавливает нулевой символ. Возвращае  размер строки по адресу src.|
|[ft_strlcat](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_strlcat.c) | size_t	ft_strlcat(char \*dst, const char \*src, size_t dstsize)| Копирует строку src в конец строки dst. Возвращает суммарную длину строк по адресам src и dst.|
|[ft_toupper](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_toupper.c) | int	ft_toupper(int ch)| Преобразует буквы из нижнего ригистра в верхний.|
|[ft_tolower](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_tolower.c) | int	ft_tolower(int ch)| Преобразует буквы из верхнего регистра в нижний.|
|[ft_strchr](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_strchr.c)  |
|[ft_strrchr](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_strrchr.c) |
|[ft_strncmp](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_strncmp.c) |
|[ft_memchr](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_memchr.c)  |
|[ft_memcmp](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_memcmp.c)  |
|[ft_strnstr](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_strnstr.c) |
|[ft_atoi](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_atoi.c)    | 
|[ft_calloc](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_calloc.c)   |
|[ft_strdup](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%201/ft_strdup.c)   |


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


