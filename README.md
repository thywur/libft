# libft

Libft is a custom implementation of the standard C library functions. It is a foundational project for the 42 school curriculum, aimed at helping students understand and implement essential C functions from scratch. This library includes a variety of functions for string manipulation, memory management, and linked list operations.

## Project Structure

The project consists of the following files:

- **String Functions**:
  - `ft_strlen.c`: Calculate the length of a string.
  - `ft_strjoin.c`: Concatenate two strings into a new string.
  - `ft_strlcat.c`: Concatenate strings with size limit.
  - `ft_strlcpy.c`: Copy strings with size limit.
  - `ft_strncmp.c`: Compare two strings up to a specified number of characters.
  - `ft_strnstr.c`: Locate a substring in a string.
  - `ft_strrchr.c`: Locate the last occurrence of a character in a string.
  - `ft_strdup.c`: Duplicate a string.
  - `ft_strtrim.c`: Trim characters from the beginning and end of a string.
  - `ft_substr.c`: Extract a substring from a string.
  - `ft_striteri.c`: Apply a function to each character of a string.
  - `ft_strmapi.c`: Create a new string by applying a function to each character of a string.
  - `ft_strchr.c`: Locate the first occurrence of a character in a string.

- **Memory Functions**:
  - `ft_memset.c`: Fill memory with a constant byte.
  - `ft_memcpy.c`: Copy memory area.
  - `ft_memmove.c`: Move memory area.
  - `ft_memchr.c`: Scan memory for a character.
  - `ft_memcmp.c`: Compare memory areas.
  - `ft_bzero.c`: Zero a byte string.
  - `ft_calloc.c`: Allocate and zero-initialize array.

- **Character Functions**:
  - `ft_isalpha.c`: Check for an alphabetic character.
  - `ft_isdigit.c`: Check for a digit (0 through 9).
  - `ft_isalnum.c`: Check for an alphanumeric character.
  - `ft_isascii.c`: Check for an ASCII character.
  - `ft_isprint.c`: Check for any printable character.
  - `ft_tolower.c`: Convert uppercase letter to lowercase.
  - `ft_toupper.c`: Convert lowercase letter to uppercase.

- **Conversion Functions**:
  - `ft_atoi.c`: Convert a string to an integer.
  - `ft_itoa.c`: Convert an integer to a string.

- **Output Functions**:
  - `ft_putchar_fd.c`: Write a character to a file descriptor.
  - `ft_putstr_fd.c`: Write a string to a file descriptor.
  - `ft_putendl_fd.c`: Write a string to a file descriptor, followed by a newline.
  - `ft_putnbr_fd.c`: Write an integer to a file descriptor.

- **Linked List Functions**:
  - `ft_lstnew.c`: Create a new list element.
  - `ft_lstadd_front.c`: Add an element at the beginning of a list.
  - `ft_lstadd_back.c`: Add an element at the end of a list.
  - `ft_lstsize.c`: Count the number of elements in a list.
  - `ft_lstlast.c`: Return the last element of a list.
  - `ft_lstdelone.c`: Delete an element from a list.
  - `ft_lstclear.c`: Delete and free all elements of a list.
  - `ft_lstiter.c`: Apply a function to each element of a list.
  - `ft_lstmap.c`: Apply a function to each element of a list and create a new list.

## Compilation

To compile the library, use the provided `Makefile`. Run the following command:

```sh
make
```
This will generate the `libft.a` static library file.

## Usage

Include the `libft.h` header file in your project to use the functions provided by Libft:

```
#include "libft.h"
```

Link the compiled `libft.a` library with your project during the compilation process.