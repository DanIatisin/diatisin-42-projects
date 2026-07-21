*This project has been created as part of the 42 curriculum by diatisin.*

# ft_printf

## Description

ft_printf recreates a simplified version of the standard C printf() function. It handles the conversions %c %s %p %d %i %u %x %X %%.

## Instructions
````bash
make        # builds libftprintf.a
make clean  # removes .o files
make fclean # removes .o files and the library
make re     # rebuilds everything
````
Usage example:

````c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s! You are %d.\n", "World", 42);
    return (0);
}
````
Compile with
```bash
cc main.c -L. -lftprintf -I. -o test
````
the compilation generates:
````bash
libftprintf.a
````
## Algorithm and data structures:
The format string is scanned character by character using a single index. Regular characters are printed directly. When a % is found, the index moves to the next character to identify the conversion specifier. A series of if/else conditions then dispatches the call to the matching function in functions.c, which retrieves the corresponding variadic argument via va_arg and handles its formatting and output. 
##  Resources
printf(3) man page
C variadic functions — cppreference
## AI usage 
In this project AI was used only to explain more in detail the subject
