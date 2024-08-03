# Libft 

## Descripción del Proyecto
Este proyecto consiste en reescribir algunas funciones de la biblioteca estándar de C (libc) con los mismos prototipos y comportamientos que las funciones originales. Las funciones reescritas comenzarán con el prefijo "ft_". Por ejemplo, `strlen` se convierte en `ft_strlen`. Además, algunas funciones originales contienen la palabra clave `restrict`, que no se utilizará en nuestras versiones.

## Instalación
Para compilar las funciones y generar una biblioteca estática, puedes usar el siguiente comando:
```bash
make
```

## Uso
Para utilizar esta biblioteca en tus propios proyectos, simplemente incluye el archivo de cabecera ft_libc.h y compila tu proyecto con la biblioteca generada libft.a.

```bash
#include "ft_libc.h"

int main() {
    char str[] = "Hello, World!";
    int len = ft_strlen(str);
    printf("Length: %d\n", len);
    return 0;
}
```
## Funciones
A continuación se presenta un índice de cada función reimplementada con una breve descripción de su propósito y uso.

### Funciones sin `malloc()`

## Funciones

### Funciones sin `malloc()`

- [**ft_isalpha**](/ft_isalpha.c): Comprueba si el carácter es una letra del alfabeto.
  - **Prototipo**: `int ft_isalpha(int c);`
  - **Descripción**: Comprueba si el carácter `c` es una letra del alfabeto (mayúscula o minúscula).

- [**ft_isdigit**](/ft_isdigit.c): Comprueba si el carácter es un dígito.
  - **Prototipo**: `int ft_isdigit(int c);`
  - **Descripción**: Comprueba si el carácter `c` es un dígito (0-9).

- [**ft_isalnum**](/ft_isalnum.c): Comprueba si el carácter es alfanumérico.
  - **Prototipo**: `int ft_isalnum(int c);`
  - **Descripción**: Comprueba si el carácter `c` es alfanumérico (letra o dígito).

- [**ft_isascii**](/ft_isascii.c): Comprueba si el carácter pertenece a la tabla ASCII.
  - **Prototipo**: `int ft_isascii(int c);`
  - **Descripción**: Comprueba si el carácter `c` pertenece al conjunto de caracteres ASCII.

- [**ft_isprint**](/ft_isprint.c): Comprueba si el carácter es imprimible.
  - **Prototipo**: `int ft_isprint(int c);`
  - **Descripción**: Comprueba si el carácter `c` es imprimible (incluyendo el espacio).

- [**ft_strlen**](/ft_strlen.c): Calcula la longitud de una cadena de caracteres.
  - **Prototipo**: `size_t ft_strlen(const char *s);`
  - **Descripción**: Devuelve la longitud de la cadena `s`.

- [**ft_memset**](/ft_memset.c): Llena un bloque de memoria con un valor específico.
  - **Prototipo**: `void *ft_memset(void *b, int c, size_t len);`
  - **Descripción**: Llena los primeros `len` bytes del área de memoria apuntada por `b` con el valor `c`.

- [**ft_bzero**](/ft_bzero.c): Establece un bloque de memoria a cero.
  - **Prototipo**: `void ft_bzero(void *s, size_t n);`
  - **Descripción**: Establece los primeros `n` bytes del área de memoria apuntada por `s` a cero.

- [**ft_memcpy**](/ft_memcpy.c): Copia un bloque de memoria a otro.
  - **Prototipo**: `void *ft_memcpy(void *dst, const void *src, size_t n);`
  - **Descripción**: Copia `n` bytes del área de memoria `src` al área de memoria `dst`.

- [**ft_memmove**](/ft_memmove.c): Mueve un bloque de memoria a otro, manejando superposiciones correctamente.
  - **Prototipo**: `void *ft_memmove(void *dst, const void *src, size_t len);`
  - **Descripción**: Mueve `len` bytes del área de memoria `src` al área de memoria `dst`, manejando correctamente las superposiciones.

- [**ft_strlcpy**](/ft_strlcpy.c): Copia una cadena a otra con tamaño máximo especificado.
  - **Prototipo**: `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);`
  - **Descripción**: Copia hasta `dstsize - 1` caracteres de la cadena `src` a `dst`, garantizando la terminación nula.

- [**ft_strlcat**](/ft_strlcat.c): Concatenar dos cadenas con tamaño máximo especificado.
  - **Prototipo**: `size_t ft_strlcat(char *dst, const char *src, size_t dstsize);`
  - **Descripción**: Añade la cadena `src` al final de `dst` hasta `dstsize - 1` caracteres, garantizando la terminación nula.

- [**ft_toupper**](/ft_toupper.c): Convierte un carácter a mayúscula.
  - **Prototipo**: `int ft_toupper(int c);`
  - **Descripción**: Convierte el carácter `c` a su equivalente en mayúscula si es una letra minúscula.

- [**ft_tolower**](/ft_tolower.c): Convierte un carácter a minúscula.
  - **Prototipo**: `int ft_tolower(int c);`
  - **Descripción**: Convierte el carácter `c` a su equivalente en minúscula si es una letra mayúscula.

- [**ft_strchr**](/ft_strchr.c): Localiza la primera aparición de un carácter en una cadena.
  - **Prototipo**: `char *ft_strchr(const char *s, int c);`
  - **Descripción**: Devuelve un puntero a la primera aparición del carácter `c` en la cadena `s`.

- [**ft_strrchr**](/ft_strrchr.c): Localiza la última aparición de un carácter en una cadena.
  - **Prototipo**: `char *ft_strrchr(const char *s, int c);`
  - **Descripción**: Devuelve un puntero a la última aparición del carácter `c` en la cadena `s`.

- [**ft_strncmp**](/ft_strncmp.c): Compara dos cadenas hasta un número determinado de caracteres.
  - **Prototipo**: `int ft_strncmp(const char *s1, const char *s2, size_t n);`
  - **Descripción**: Compara hasta `n` caracteres de las cadenas `s1` y `s2`.

- [**ft_memchr**](/ft_memchr.c): Busca un carácter en un bloque de memoria.
  - **Prototipo**: `void *ft_memchr(const void *s, int c, size_t n);`
  - **Descripción**: Busca el carácter `c` en los primeros `n` bytes del bloque de memoria apuntado por `s`.

- [**ft_memcmp**](/ft_memcmp.c): Compara dos bloques de memoria.
  - **Prototipo**: `int ft_memcmp(const void *s1, const void *s2, size_t n);`
  - **Descripción**: Compara los primeros `n` bytes de los bloques de memoria `s1` y `s2`.

- [**ft_strnstr**](/ft_strnstr.c): Localiza una subcadena dentro de una cadena, hasta un número determinado de caracteres.
  - **Prototipo**: `char *ft_strnstr(const char *haystack, const char *needle, size_t len);`
  - **Descripción**: Localiza la primera aparición de la subcadena `needle` en `haystack`, buscando como máximo `len` caracteres.

- [**ft_atoi**](/ft_atoi.c): Convierte una cadena a un número entero.
  - **Prototipo**: `int ft_atoi(const char *str);`
  - **Descripción**: Convierte la cadena `str` a un número entero.

### Funciones con `malloc()`

- [**ft_calloc**](/ft_calloc.c): Asigna memoria para una matriz, inicializando todos sus bytes a cero.
  - **Prototipo**: `void *ft_calloc(size_t count, size_t size);`
  - **Descripción**: Asigna memoria para una matriz de `count` elementos de `size` bytes cada uno, inicializando todos los bytes a cero.

- [**ft_strdup**](/ft_strdup.c): Duplica una cadena de caracteres.
  - **Prototipo**: `char *ft_strdup(const char *s1);`
  - **Descripción**: Duplica la cadena `s1` reservando memoria con `malloc`.

### Funciones adicionales

- [**ft_substr**](/ft_substr.c): Crea una subcadena a partir de una cadena dada.
  - **Prototipo**: `char *ft_substr(char const *s, unsigned int start, size_t len);`
  - **Descripción**: Reserva memoria y devuelve una subcadena de la cadena `s` que empieza en el índice `start` y tiene una longitud máxima de `len`.

- [**ft_strjoin**](/ft_strjoin.c): Une dos cadenas en una nueva cadena.
  - **Prototipo**: `char *ft_strjoin(char const *s1, char const *s2);`
  - **Descripción**: Reserva memoria y devuelve una nueva cadena que es la concatenación de `s1` y `s2`.

- [**ft_strtrim**](/ft_strtrim.c): Elimina los caracteres especificados desde el principio y el final de una cadena.
  - **Prototipo**: `char *ft_strtrim(char const *s1, char const *set);`
  - **Descripción**: Reserva memoria y devuelve una nueva cadena eliminando los caracteres de `set` desde el principio y el final de `s1`.

- [**ft_split**](/ft_split.c): Divide una cadena en una matriz de cadenas utilizando un delimitador.
  - **Prototipo**: `char **ft_split(char const *s, char c);`
  - **Descripción**: Reserva memoria y devuelve una matriz de cadenas obtenidas dividiendo `s` usando el delimitador `c`.

- [**ft_itoa**](/ft_itoa.c): Convierte un número entero a una cadena de caracteres.
  - **Prototipo**: `char *ft_itoa(int n);`
  - **Descripción**: Reserva memoria y devuelve una cadena que representa el número entero `n`.

- [**ft_strmapi**](/ft_strmapi.c): Aplica una función a cada carácter de una cadena para crear una nueva cadena.
  - **Prototipo**: `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`
  - **Descripción**: Reserva memoria y aplica la función `f` a cada carácter de `s` para crear una nueva cadena.

- [**ft_striteri**](/ft_striteri.c): Aplica una función a cada carácter de una cadena.
  - **Prototipo**: `void ft_striteri(char *s, void (*f)(unsigned int, char*));`
  - **Descripción**: Aplica la función `f` a cada carácter de `s`.

- [**ft_putchar_fd**](/ft_putchar_fd.c): Escribe un carácter en un descriptor de archivo.
  - **Prototipo**: `void ft_putchar_fd(char c, int fd);`
  - **Descripción**: Escribe el carácter `c` en el descriptor de archivo `fd`.

- [**ft_putstr_fd**](/ft_putstr_fd.c): Escribe una cadena en un descriptor de archivo.
  - **Prototipo**: `void ft_putstr_fd(char *s, int fd);`
  - **Descripción**: Escribe la cadena `s` en el descriptor de archivo `fd`.

- [**ft_putendl_fd**](/ft_putendl_fd.c): Escribe una cadena seguida de un salto de línea en un descriptor de archivo.
  - **Prototipo**: `void ft_putendl_fd(char *s, int fd);`
  - **Descripción**: Escribe la cadena `s` seguida de un salto de línea en el descriptor de archivo `fd`.

- [**ft_putnbr_fd**](/ft_putnbr_fd.c): Escribe un número entero en un descriptor de archivo.
  - **Prototipo**: `void ft_putnbr_fd(int n, int fd);`
  - **Descripción**: Escribe el número entero `n` en el descriptor de archivo `fd`.

### Funciones bonus
Para la implemenacion de las siguientes funciones es importante implementar la siguiente estructura en el archivo libft.h

```bash
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;
```

- [**ft_putnbr_fd**](/ft_putnbr_fd.c): Escribe un número entero en un descriptor de archivo.
  - **Prototipo**: `void ft_putnbr_fd(int n, int fd);`
  - **Descripción**: Escribe el número entero `n` en el descriptor de archivo `fd`.

- [**ft_lstnew**](/ft_lstnew.c): Crea un nuevo nodo con un contenido dado.
  - **Prototipo**: `t_list *ft_lstnew(void *content);`
  - **Descripción**: Crea un nuevo nodo utilizando `malloc(3)`. La variable miembro `content` se inicializa con el contenido del parámetro `content`. La variable `next` se inicializa con `NULL`.

- [**ft_lstadd_front**](/ft_lstadd_front.c): Añade un nodo al principio de la lista.
  - **Prototipo**: `void ft_lstadd_front(t_list **lst, t_list *new);`
  - **Descripción**: Añade el nodo `new` al principio de la lista `lst`.

- [**ft_lstsize**](/ft_lstsize.c): Cuenta el número de nodos en una lista.
  - **Prototipo**: `int ft_lstsize(t_list *lst);`
  - **Descripción**: Cuenta el número de nodos de una lista.

- [**ft_lstlast**](/ft_lstlast.c): Devuelve el último nodo de la lista.
  - **Prototipo**: `t_list *ft_lstlast(t_list *lst);`
  - **Descripción**: Devuelve el último nodo de la lista.

- [**ft_lstadd_back**](/ft_lstadd_back.c): Añade un nodo al final de la lista.
  - **Prototipo**: `void ft_lstadd_back(t_list **lst, t_list *new);`
  - **Descripción**: Añade el nodo `new` al final de la lista `lst`.

- [**ft_lstdelone**](/ft_lstdelone.c): Elimina y libera un nodo de la lista.
  - **Prototipo**: `void ft_lstdelone(t_list *lst, void (*del)(void *));`
  - **Descripción**: Toma como parámetro un nodo `lst` y libera la memoria del contenido utilizando la función `del` dada como parámetro, además de liberar el nodo. La memoria de `next` no debe liberarse.

- [**ft_lstclear**](/ft_lstclear.c): Elimina y libera todos los nodos de una lista.
  - **Prototipo**: `void ft_lstclear(t_list **lst, void (*del)(void *));`
  - **Descripción**: Elimina y libera el nodo `lst` dado y todos los consecutivos de ese nodo, utilizando la función `del` y `free(3)`. Al final, el puntero a la lista debe ser `NULL`.

- [**ft_lstiter**](/ft_lstiter.c): Aplica una función a cada nodo de una lista.
  - **Prototipo**: `void ft_lstiter(t_list *lst, void (*f)(void *));`
  - **Descripción**: Itera la lista `lst` y aplica la función `f` en el contenido de cada nodo.

- [**ft_lstmap**](/ft_lstmap.c): Crea una nueva lista aplicando una función a cada nodo de la lista original.
  - **Prototipo**: `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));`
  - **Descripción**: Itera la lista `lst` y aplica la función `f` al contenido de cada nodo. Crea una lista resultante de la aplicación correcta y sucesiva de la función `f` sobre cada nodo. La función `del` se utiliza para eliminar el contenido de un nodo, si hace falta.

