*This project has been created as part of the 42 curriculum by <gucakmak>.*

# libft

## Description

libft is a personal C library built from scratch. It reimplements a set of standard libc functions, adds extra string and output utilities, and includes a small linked-list toolkit as a bonus.

The goal is to understand how these functions work internally: pointers, memory allocation, string handling, and edge cases. The library is reused in later 42 projects.

## Instructions

### Compilation

```bash
make          # builds libft.a (mandatory part)
make bonus    # adds the linked list functions to libft.a
make clean    # removes object files
make fclean   # removes object files and libft.a
make re       # fclean + make
```

Compiled with `cc -Wall -Wextra -Werror`.

### Usage

```c
#include "libft.h"
```

```bash
cc main.c -L. -lft -o program
```

## Library description

### Part 1: libc functions

| Function | Description |
|---|---|
| `ft_isalpha` | Checks for an alphabetic character |
| `ft_isdigit` | Checks for a digit |
| `ft_isalnum` | Checks for an alphanumeric character |
| `ft_isascii` | Checks for a valid ASCII value (0-127) |
| `ft_isprint` | Checks for a printable character |
| `ft_toupper` | Converts a lowercase letter to uppercase |
| `ft_tolower` | Converts an uppercase letter to lowercase |
| `ft_strlen` | Returns the length of a string |
| `ft_strchr` | Finds the first occurrence of a character in a string |
| `ft_strrchr` | Finds the last occurrence of a character in a string |
| `ft_strncmp` | Compares two strings up to n bytes |
| `ft_strnstr` | Finds a substring within the first n bytes of a string |
| `ft_strlcpy` | Copies a string into a buffer of given size, always null-terminating |
| `ft_strlcat` | Appends a string to a buffer of given size, always null-terminating |
| `ft_strdup` | Returns a heap-allocated copy of a string |
| `ft_atoi` | Converts the initial part of a string to an int |
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Zeroes a block of memory |
| `ft_memcpy` | Copies n bytes between non-overlapping memory areas |
| `ft_memmove` | Copies n bytes between memory areas, safe when they overlap |
| `ft_memchr` | Finds a byte in a memory area |
| `ft_memcmp` | Compares two memory areas |
| `ft_calloc` | Allocates zero-initialized memory |

### Part 2: additional functions

| Function | Description |
|---|---|
| `ft_substr` | Returns a new string extracted from a string (start index, max length) |
| `ft_strjoin` | Returns a new string made of two concatenated strings |
| `ft_strtrim` | Returns a copy of a string with given characters removed from both ends |
| `ft_split` | Splits a string by a delimiter into a NULL-terminated array of strings |
| `ft_itoa` | Converts an int to a newly allocated string |
| `ft_strmapi` | Builds a new string by applying a function to each character (with index) |
| `ft_striteri` | Applies a function to each character of a string in place (with index) |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Writes an int to a file descriptor |

### Bonus: linked lists

Uses `t_list { void *content; struct s_list *next; }`.

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstsize` | Counts the nodes in the list |
| `ft_lstlast` | Returns the last node |
| `ft_lstdelone` | Frees one node's content with a given function, then the node |
| `ft_lstclear` | Deletes and frees a node and all following nodes |
| `ft_lstiter` | Applies a function to each node's content |
| `ft_lstmap` | Builds a new list by applying a function to each node's content, cleaning up on allocation failure |

## Resources

- `man` pages for each reimplemented function (`man 3 strlen`, `man 3 malloc`, ...)
- The C Programming Language, Kernighan & Ritchie
- 42 libft subject PDF

### AI usage

Claude was used as a debugging and review assistant, not as a code generator. I wrote every function myself first, then used AI to:

- find bugs in my code (pointer misuse, `size_t` underflow, double-pointer handling in list functions, memory leaks)
- explain low-level concepts (stack vs heap, `void *` casts, function pointers)
- clarify Norminette rules

No function was written by AI. All code was reviewed and understood by me.
