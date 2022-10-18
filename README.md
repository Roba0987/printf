# _printf
_printf is our implemenation of the C programming standard function printf.

Prototype: int _printf(const char *format, ...);

# Examples
**String** <br />
Input: _printf("%s\n", "Hello World!"); <br />
Output: Hello World!

**Character** <br />
Input: _printf("The first letter in the alphabet is %c\n", 'A'); <br />
Output: The first letter in the alphabet is A

**Decimal** <br />
Input: _printf("There are %d characters in the English alphabet", 26); <br />
Output: There are 26 characters in the English alphabet

# Project Requirements
* All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options
  -Wall -Werror -Wextra -pedantic -std=gnu89
* Code uses the Betty style
* Authorized functions and macros
        ° write (man 2 write)
        ° malloc (man 3 malloc)
        ° free (man 3 free)
        ° va_start (man 3 va_start)
        ° va_end (man 3 va_end)
        ° va_copy (man 3 va_copy)
        ° va_arg (man 3 va_arg)

# Mandatory Tasks

- [x] write function that produces output with the conversion specifiers c, s, and %
- [x] handle conversion specifiers d and i.

# Advanced Tasks 
- [ ] To be added later 

# File Descriptions
* _printf.c: - contains the fucntion _printf, which uses the prototype int _printf(const char *format, ...);.
* _putchar.c: - contains the function _putchar, which writes a character to stdout.
* main.h: - contains all function prototypes and struct definitions used for _printf.
* print_chars.c: - contains the functions print_char, print_str which handle the conversion specifiers c and s respectively.
* print_numbers.c: - contains the functions print_int which handles the conversion specifiers i and d.

# Authors

**Rodas Alemseged** \| [@rodasbest](https://github.com/rodasbest)

**Roba Bekele** \| [@Roba0987](https://github.com/Roba0987)
