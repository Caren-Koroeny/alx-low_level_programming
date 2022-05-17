# 0x10. C-Variadic functions.

In this project I learnt about using variadic functions wih the use of `va_start`, `va_arg`, and `va_end` macros as well aswhy and how to use `cont` type qualifier in C.

## Reasourses.

-Learning resourses was provided by Holberton school , as well as personal research was done:

- Some of materials provided were: 1. [stdarg.h](https://en.wikipedia.org/wiki/Stdarg.h) 2. [Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html) 3. [Const Keyword](https://www.youtube.com/watch?v=1W4oyuOdXv8)

## Header File.

 * variadic_functions.h: This header file contains all the definations, prototypes for all types and functions used in the project.
		|-------------------------------------------------------------------------------------------------------|
		|    File              | 	     Defination		 						|
		|----------------------|-------------------------------------------------------------------------------	|
		| `0-sum_them_all.c`   | `int sum_them_all(const unsigned int n, ...);` 				|
		|----------------------|--------------------------------------------------------------------------------|
		| `1-print_numbers.c`  | `void print_numbers(const char *separator, const unsigned int n, ...);`	|
		|----------------------|--------------------------------------------------------------------------------|
		| `2-print_strings.c`  | `void print_strings(const char *separator, const unsigned int n, ...);`	|
		|----------------------|--------------------------------------------------------------------------------|
		| `3-print_all.c`      | `void print_all(const char * const format, ...);`				|
		|----------------------|--------------------------------------------------------------------------------|
		| `struct printer`     |  * `char *symbol`								|
		| 		       |  * `void (*print)(va_list arg)`  						|
		|----------------------|--------------------------------------------------------------------------------|
		| `typedef printer_t`  | `struct printer`								|
		|-------------------------------------------------------------------------------------------------------|
## Tasks 

	* 0. Beauty is variable, ugliness is constant
