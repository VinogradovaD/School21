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

| Функция                                                                                            | Прототип      | Описание      |
| -------------------------------------------------------------------------------------------------- |---------------|---------------|
|[ft_substr](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%202/ft_substr.c)        |char	\*ft_substr(char const \*s, unsigned int start, size_t len)| Возвращает подстроку длины len, начинающуюся с элемента по указателю start в строке с указателем s|
|[ft_strjoin](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%202/ft_strjoin.c)      |char	\*ft_strjoin(char const \*s1, char const \*s2)| Возращает новую строку, которая состоит из строк с указателями s1 и s2.|
|[ft_strtrim](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%202/ft_strtrim.c)      |char	\*ft_strtrim(char const \*s1, char const \*set)|Отбрасывает символы из массива set с начала и с конца строки.|
|[ft_split](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%202/ft_split.c)          |char	\**ft_split(char const \*s, char c)|Разделяет слова по указателю с.|
|[ft_itoa](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%202/ft_itoa.c)            |char	\*ft_itoa(int n)|Конвертирует число n в строку.|
|[ft_strmapi](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%202/ft_strmapi.c)      |char	\*ft_strmapi(char const \*s, char (\*f)(unsigned int, char))|Возвращает новый массив с элементами из массива с указателем s, к которым применяется функция f.|
|[ft_striteri](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%202/ft_striteri.c)    |void	ft_striteri(char \*s, void (\*f)(unsigned int, char\*))|Применяет функцию f к каждому элементу массива с указателем s.|
|[ft_putchar_fd](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%202/ft_putchar_fd.c)|void	ft_putchar_fd(char c, int fd)|Выводит символ с в указанный файловый дескриптор fd.|
|[ft_putstr_fd](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%202/ft_putstr_fd.c)  |void	ft_putstr_fd(char \*s, int fd)|Выводит строку с указателем s в указанный файловый дескриптор fd.|
|[ft_putendl_fd](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%202/ft_putendl_fd.c)|void	ft_putendl_fd(char \*s, int fd)|Выводит строку с указателем s в указанный файловый дескриптор fd, затем переходит на новую строку.|
|[ft_putnbr_fd](https://github.com/VinogradovaD/School_21/blob/main/Libft/Часть%202/ft_putnbr_fd.c)  |void	ft_putnbr_fd(int n, int fd)|Выводит  число n в указанный файловый дескриптор fd.|


## Бонусы

| Функция                                                                                                                   | Прототип      | Описание      |
| ------------------------------------------------------------------------------------------------------------------------- |-------------- |---------------|
|[ft_lstnew](https://github.com/VinogradovaD/School_21/blob/main/Libft/%D0%91%D0%BE%D0%BD%D1%83%D1%81%D1%8B/ft_lstnew.c)|t_list	\*ft_lstnew(void \*content)|Создает новый элемент структуры с данными content.|
|[ft_lstadd_front](https://github.com/VinogradovaD/School_21/blob/main/Libft/%D0%91%D0%BE%D0%BD%D1%83%D1%81%D1%8B/ft_lstadd_front.c)|void	ft_lstadd_front(t_list \**lst, t_list \*new)|Добавляет новый элемент структуры начало списка.
|[ft_lstsize](https://github.com/VinogradovaD/School_21/blob/main/Libft/%D0%91%D0%BE%D0%BD%D1%83%D1%81%D1%8B/ft_lstsize.c)          |int	ft_lstsize(t_list \*lst)| Возвращает количество элементов списка.|
|[ft_lstlast](https://github.com/VinogradovaD/School_21/blob/main/Libft/%D0%91%D0%BE%D0%BD%D1%83%D1%81%D1%8B/ft_lstlast.c)          |t_list	\*ft_lstlast(t_list \*lst)| Возвращает последний элемент списка.|
|[ft_lstadd_back](https://github.com/VinogradovaD/School_21/blob/main/Libft/%D0%91%D0%BE%D0%BD%D1%83%D1%81%D1%8B/ft_lstadd_back.c)  |void	ft_lstadd_back(t_list \**lst, t_list \*new)|Добавляет новый элемент структуры в конец списка.|
|[ft_lstdelone](https://github.com/VinogradovaD/School_21/blob/main/Libft/%D0%91%D0%BE%D0%BD%D1%83%D1%81%D1%8B/ft_lstdelone.c)      |void	ft_lstdelone(t_list \*lst, void (\*del)(void \*))|Освобождает память содержимого элемента с помощью функции del.|
|[ft_lstclear](https://github.com/VinogradovaD/School_21/blob/main/Libft/%D0%91%D0%BE%D0%BD%D1%83%D1%81%D1%8B/ft_lstclear.c)        |void	ft_lstclear(t_list \**lst, void (\*del)(void \*))|Освобождает память содержимого списка с помощью функции del.|
|[ft_lstiter](https://github.com/VinogradovaD/School_21/blob/main/Libft/%D0%91%D0%BE%D0%BD%D1%83%D1%81%D1%8B/ft_lstiter.c)          |void	ft_lstiter(t_list *lst, void (*f)(void *))|Применяет к каждому элементу списка функцию f.|
|[ft_lstmap](https://github.com/VinogradovaD/School_21/blob/main/Libft/%D0%91%D0%BE%D0%BD%D1%83%D1%81%D1%8B/ft_lstmap.c)            |t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))|Создает новый список на основе старого и применяет к каждому элементу функцию f.|


