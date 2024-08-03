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

- [**ft_isalpha**](/ft_isalpha.c): Comprueba si el carácter es una letra del alfabeto.
  - **Prototipo**: `int ft_isalpha(int c);`
  - **Descripción**: Comprueba si el carácter `c` es una letra del alfabeto (mayúscula o minúscula).

- **ft_isdigit**: Comprueba si el carácter es un dígito.
  - **Prototipo**: `int ft_isdigit(int c);`
  - **Descripción**: Comprueba si el carácter `c` es un dígito (0-9).
  - [Ver código](src/ft_isdigit.c)

- **ft_isalnum**: Comprueba si el carácter es alfanumérico.
  - **Prototipo**: `int ft_isalnum(int c);`
  - **Descripción**: Comprueba si el carácter `c` es alfanumérico (letra o dígito).
  - [Ver código](ft_isalnum.c)

- **ft_isascii**: Comprueba si el carácter pertenece a la tabla ASCII.
  - **Prototipo**: `int ft_isascii(int c);`
  - **Descripción**: Comprueba si el carácter `c` pertenece al conjunto de caracteres ASCII.
  - [Ver código](src/ft_isascii.c)

- **ft_isprint**: Comprueba si el carácter es imprimible.
  - **Prototipo**: `int ft_isprint(int c);`
  - **Descripción**: Comprueba si el carácter `c` es imprimible (incluyendo el espacio).
  - [Ver código](src/ft_isprint.c)

- **ft_strlen**: Calcula la longitud de una cadena de caracteres.
  - **Prototipo**: `size_t ft_strlen(const char *s);`
  - **Descripción**: Devuelve la longitud de la cadena `s`.
  - [Ver código](src/ft_strlen.c)

- **ft_memset**: Llena un bloque de memoria con un valor específico.
  - **Prototipo**: `void *ft_memset(void *b, int c, size_t len);`
  - **Descripción**: Llena los primeros `len` bytes del área de memoria apuntada por `b` con el valor `c`.
  - [Ver código](src/ft_memset.c)

- **ft_bzero**: Establece un bloque de memoria a cero.
  - **Prototipo**: `void ft_bzero(void *s, size_t n);`
  - **Descripción**: Establece los primeros `n` bytes del área de memoria apuntada por `s` a cero.
  - [Ver código](src/ft_bzero.c)

- **ft_memcpy**: Copia un bloque de memoria a otro.
  - **Prototipo**: `void *ft_memcpy(void *dst, const void *src, size_t n);`
  - **Descripción**: Copia `n` bytes del área de memoria `src` al área de memoria `dst`.
  - [Ver código](src/ft_memcpy.c)

- **ft_memmove**: Mueve un bloque de memoria a otro, manejando superposiciones correctamente.
  - **Prototipo**: `void *ft_memmove(void *dst, const void *src, size_t len);`
  - **Descripción**: Mueve `len` bytes del área de memoria `src` al área de memoria `dst`, manejando correctamente las superposiciones.
  - [Ver código](src/ft_memmove.c)

- **ft_strlcpy**: Copia una cadena a otra con tamaño máximo especificado.
  - **Prototipo**: `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);`
  - **Descripción**: Copia hasta `dstsize - 1` caracteres de la cadena `src` a `dst`, garantizando la terminación nula.
  - [Ver código](src/ft_strlcpy.c)

- **ft_strlcat**: Concatenar dos cadenas con tamaño máximo especificado.
  - **Prototipo**: `size_t ft_strlcat(char *dst, const char *src, size_t dstsize);`
  - **Descripción**: Añade la cadena `src` al final de `dst` hasta `dstsize - 1` caracteres, garantizando la terminación nula.
  - [Ver código](src/ft_strlcat.c)

- **ft_toupper**: Convierte un carácter a mayúscula.
  - **Prototipo**: `int ft_toupper(int c);`
  - **Descripción**: Convierte el carácter `c` a su equivalente en mayúscula si es una letra minúscula.
  - [Ver código](src/ft_toupper.c)

- **ft_tolower**: Convierte un carácter a minúscula.
  - **Prototipo**: `int ft_tolower(int c);`
  - **Descripción**: Convierte el carácter `c` a su equivalente en minúscula si es una letra mayúscula.
  - [Ver código](src/ft_tolower.c)

- **ft_strchr**: Localiza la primera aparición de un carácter en una cadena.
  - **Prototipo**: `char *ft_strchr(const char *s, int c);`
  - **Descripción**: Devuelve un puntero a la primera aparición del carácter `c` en la cadena `s`.
  - [Ver código](src/ft_strchr.c)

- **ft_strrchr**: Localiza la última aparición de un carácter en una cadena.
  - **Prototipo**: `char *ft_strrchr(const char *s, int c);`
  - **Descripción**: Devuelve un puntero a la última aparición del carácter `c` en la cadena `s`.
  - [Ver código](src/ft_strrchr.c)

- **ft_strncmp**: Compara dos cadenas hasta un número determinado de caracteres.
  - **Prototipo**: `int ft_strncmp(const char *s1, const char *s2, size_t n);`
  - **Descripción**: Compara hasta `n` caracteres de las cadenas `s1` y `s2`.
  - [Ver código](src/ft_strncmp.c)

- **ft_memchr**: Busca un carácter en un bloque de memoria.
  - **Prototipo**: `void *ft_memchr(const void *s, int c, size_t n);`
  - **Descripción**: Busca el carácter `c` en los primeros `n` bytes del bloque de memoria apuntado por `s`.
  - [Ver código](src/ft_memchr.c)

- **ft_memcmp**: Compara dos bloques de memoria.
  - **Prototipo**: `int ft_memcmp(const void *s1, const void *s2, size_t n);`
  - **Descripción**: Compara los primeros `n` bytes de los bloques de memoria `s1` y `s2`.
  - [Ver código](src/ft_memcmp.c)

- **ft_strnstr**: Localiza una subcadena dentro de una cadena, hasta un número determinado de caracteres.
  - **Prototipo**: `char *ft_strnstr(const char *haystack, const char *needle, size_t len);`
  - **Descripción**: Localiza la primera aparición de la subcadena `needle` en `haystack`, buscando como máximo `len` caracteres.
  - [Ver código](src/ft_strnstr.c)

- **ft_atoi**: Convierte una cadena a un número entero.
  - **Prototipo**: `int ft_atoi(const char *str);`
  - **Descripción**: Convierte la cadena `str` a un número entero.
  - [Ver código](src/ft_atoi.c)

### Funciones con `malloc()`

- **ft_calloc**: Asigna memoria para una matriz, inicializando todos sus bytes a cero.
  - **Prototipo**: `void *ft_calloc(size_t count, size_t size);`
  - **Descripción**: Asigna memoria para una matriz de `count` elementos de `size` bytes cada uno, inicializando todos los bytes a cero.
  - [Ver código](src/ft_calloc.c)

- **ft_strdup**: Duplica una cadena de caracteres.
  - **Prototipo**: `char *ft_strdup(const char *s1);`
  - **Descripción**: Duplica la cadena `s1` reservando memoria con `malloc`.
  - [Ver código](src/ft_strdup.c)
### Funciones adicionales

- **ft_substr**: Crea una subcadena a partir de una cadena dada.
  - **Prototipo**: `char *ft_substr(char const *s, unsigned int start, size_t len);`
  - **Descripción**: Reserva memoria y devuelve una subcadena de la cadena `s` que empieza en el índice `start` y tiene una longitud máxima de `len`.

- **ft_strjoin**: Une dos cadenas en una nueva cadena.
  - **Prototipo**: `char *ft_strjoin(char const *s1, char const *s2);`
  - **Descripción**: Reserva memoria y devuelve una nueva cadena que es la concatenación de `s1` y `s2`.

- **ft_strtrim**: Elimina caracteres específicos del principio y final de una cadena.
  - **Prototipo**: `char *ft_strtrim(char const *s1, char const *set);`
  - **Descripción**: Reserva memoria y devuelve una nueva cadena que es la cadena `s1` sin los caracteres especificados en `set` al principio y al final.

- **ft_split**: Separa una cadena en un array de subcadenas utilizando un delimitador.
  - **Prototipo**: `char **ft_split(char const *s, char c);`
  - **Descripción**: Reserva memoria y devuelve un array de cadenas resultante de dividir `s` por el delimitador `c`.

- **ft_itoa**: Convierte un número entero a una cadena de caracteres.
  - **Prototipo**: `char *ft_itoa(int n);`
  - **Descripción**: Reserva memoria y devuelve una cadena que representa el valor entero `n`.

- **ft_strmapi**: Aplica una función a cada carácter de una cadena, creando una nueva cadena con los resultados.
  - **Prototipo**: `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));`
  - **Descripción**: Reserva memoria y devuelve una nueva cadena que es el resultado de aplicar la función `f` a cada carácter de la cadena `s`.

- **ft_striteri**: Aplica una función a cada carácter de una cadena, permitiendo modificar la cadena en su lugar.
  - **Prototipo**: `void ft_striteri(char *s, void (*f)(unsigned int, char*));`
  - **Descripción**: Aplica la función `f` a cada carácter de la cadena `s`, permitiendo modificar cada carácter en su lugar.

- **ft_putchar_fd**: Envía un carácter a un descriptor de archivo.
  - **Prototipo**: `void ft_putchar_fd(char c, int fd);`
  - **Descripción**: Envía el carácter `c` al file descriptor `fd`.

- **ft_putstr_fd**: Envía una cadena a un descriptor de archivo.
  - **Prototipo**: `void ft_putstr_fd(char *s, int fd);`
  - **Descripción**: Envía la cadena `s` al file descriptor `fd`.

- **ft_putendl_fd**: Envía una cadena seguida de un salto de línea a un descriptor de archivo.
  - **Prototipo**: `void ft_putendl_fd(char *s, int fd);`
  - **Descripción**: Envía la cadena `s` seguida de un salto de línea al file descriptor `fd`.

- **ft_putnbr_fd**: Envía un número entero a un descriptor de archivo.
  - **Prototipo**: `void ft_putnbr_fd(int n, int fd);`
  - **Descripción**: Envía el número entero `n` al file descriptor `fd`.
