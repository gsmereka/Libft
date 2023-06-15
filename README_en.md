# Libtf

## [Português](https://github.com/gsmereka/Libft) | English

## C Function Library

## Table of Contents

1. [About the Project](#about-the-project)
2. [How to Use Libft in Your Project](#how-to-use-libft-in-your-project)
3. [Dependencies](#dependencies)
4. [Functions](#functions)

## About the Project

This library was developed in a **Linux** environment and contains a set of standard functions in **C** that were implemented and tested by me. In addition to learning about the functioning of these functions, the goal of this project was to create a useful library that can be used and improved in other projects, including future projects at **[42 SP](https://github.com/gsmereka/42_Projects)**.

## How to Use Libft in Your Project

1. Check the [Dependencies](#dependencies).
2. Clone the Repository.
   - ```git clone https://github.com/gsmereka/Libft.git```
3. Compile the library.
   - ```cd libft```
   - ```make```
4. Include the libft header in your project's header. You can do this by adding the following line at the beginning of your file:
   - ```#include libtf/header/libft.h```
5. Compile your project including the libft.a file. For example:
   - ```gcc your_project.c Libft/libft.a -o your_project```

## Dependencies

- Update system package information:
  - ```sudo apt-get update```
- Libraries:
  - ```sudo apt-get install build-essential```
- Makefile:
  - ```sudo apt-get install make```
- gcc:
  - ```sudo apt-get install gcc```

## Functions

| Function      | Description                                                                 |
| ------------- | --------------------------------------------------------------------------- |
| ft_atoi       | Converts a string to an integer value.                                      |
| ft_isalpha    | Checks if a character is an alphabetic character.                           |
| ft_itoa       | Converts an integer to a string.                                            |
| ft_memmove    | Copies a block of memory, handling overlapping areas.                       |
| ft_putnbr_fd  | Writes an integer to a file descriptor.                                     |
| ft_strdup     | Creates a duplicate of a string.                                            |
| ft_strlcpy    | Copies a string with a specified size.                                      |
| ft_strnstr    | Locates the first occurrence of a substring in a string with a limited size.|
| ft_tolower    | Converts a character to lowercase, if applicable.                           |
| ft_bzero      | Fills a block of memory with zeros.                                         |
| ft_isascii    | Checks if a character is a valid ASCII value.                               |
| ft_memchr     | Searches for a byte in a block of memory.                                   |
| ft_memset     | Fills a block of memory with a specified byte.                              |
| ft_putstr_fd  | Writes a string to a file descriptor.                                       |
| ft_striteri   | Applies a function to each character of a string.                           |
| ft_strlen     | Calculates the length of a string.                                          |
| ft_strrchr    | Locates the last occurrence of a character in a string.                     |
| ft_toupper    | Converts a character to uppercase, if applicable.                           |
| ft_calloc     | Allocates memory and initializes it with zeros.                             |
| ft_isalnum    | Checks if a character is alphanumeric.                                     |
| ft_isdigit    | Checks if a character is a decimal digit.                                   |
| ft_memcpy     | Copies a block of memory.                                                   |
| ft_putendl_fd   | Writes a string followed by a newline to a file descriptor.                     |
| ft_split      | Divides a string into substrings based on a delimiter character.                |
| ft_strchr     | Locates the first occurrence of a character in a string.                        |
| ft_strlcat    | Safely concatenates two strings, avoiding buffer overflow.                      |
| ft_strncmp    | Compares the first characters of two strings up to a specified size.            |
| ft_substr     | Extracts a substring from a string based on a starting index and length.         |
