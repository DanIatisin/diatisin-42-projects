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

Algorithm and data structures:
So basicaly the program read the string until it encounters a "%" then i lock the idex on that element and just by adding "+1" to the index in the condition it reads the next element which if it is a format it enters the if else statements, where the funtions are recaled from functions.c 

###  Resources
printf(3) man page
C variadic functions — cppreference

# AI usage 
In this project AI was used only to explain more in detail the subject
