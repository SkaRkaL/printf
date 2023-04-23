#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

#define B2 "01"
#define B8 "01234567"
#define B10 "0123456789"
#define B16U "0123456789ABCDEF"
#define B16L "0123456789abcdef"

int _non_printable(char *str);
int _prints_rot13(char *s);
int _strrev(char *s);
int _putnbr_u(unsigned int nbr);
int _putnbr_base(unsigned long int nbr, char *base);
int _putAddress(unsigned long long nbr);
int _putnbr(int nbr);
int _putstr(char *str);
int _putchar(char c);
int _char_is_printable(char c);
int _non_printable(char *str);
int _prints_rot13(char *str);
int _strlen(char *s);
int _strrev(char *s);
int _printf(const char *format, ...);

#endif
