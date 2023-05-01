# Ft_printf

## About <a name = "about"></a>

ft_printf is a function that allows you to replicate the functionality of the printf function from the libc library. It was developed as part of a study project at school 42.

### Features

The ft_printf function allows you to handle the following conversions:
| Conversion | Description |
| --- | --- |
| **%c** | Displays a single character |
| **%s** | Displays a string of characters (as defined by the C convention) |
| **%p** | Displays an argument of type void * in hexadecimal |
| **%d** | Displays a decimal number (base 10) |
| **%i** | Displays an integer in base 10 |
| **%u** | Displays an unsigned decimal number (base 10) |
| **%x** | Displays a number in hexadecimal (base 16) with lowercase letters |
| **%X** | Displays a number in hexadecimal (base 16) with uppercase letters |
| **%%** | Displays a percentage sign |



## Getting Started

To create the static library, all you have to do is:
````bash 
	git clone git@github.com:ltrinchini/Printf.git
	cd Printf
	make
````

## Usage

To use it you must include libft.h in your project and when compiling call the static library like this:
````bash
	gcc -o myprogram myprogam.c -L. -lftprintf 
````
