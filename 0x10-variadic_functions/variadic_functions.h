#ifndef VARIADIC_FUNCTIONS_H                                                                                                     
#define VARIADIC_FUNCTIONS_H                                                                                                     
                                                                                                                                 
/*                                                                                                                               
 * File: variadic_functions.h                                                                                                    
 * Auth: Caren Koroeny 
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0F-variadic_functions directory.
 */

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
