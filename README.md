# libft

**libft** is a custom C library that recreates essential functions from the standard C library (`libc`) and adds additional utility functions. This project is part of the 42 School curriculum and serves as the foundation for future C projects.

All functions are prefixed with `ft_` to distinguish them from their standard library counterparts.

## Functions Implemented

### Character Classification Functions
- **`ft_isalpha`** - Checks if character is alphabetic (a-z, A-Z)
- **`ft_isdigit`** - Checks if character is a digit (0-9)
- **`ft_isalnum`** - Checks if character is alphanumeric (letter or digit)
- **`ft_isascii`** - Checks if character is within ASCII range (0-127)
- **`ft_isprint`** - Checks if character is printable (including space)

### Character Conversion Functions
- **`ft_toupper`** - Converts lowercase letter to uppercase
- **`ft_tolower`** - Converts uppercase letter to lowercase

### String Functions
- **`ft_strlen`** - Calculates the length of a string
- **`ft_strlcpy`** - Safe string copy with size limit
- **`ft_strlcat`** - Safe string concatenation with size limit
- **`ft_strchr`** - Locates first occurrence of character in string
- **`ft_strrchr`** - Locates last occurrence of character in string
- **`ft_strncmp`** - Compares strings up to n characters
- **`ft_strnstr`** - Locates substring within string (with size limit)
- **`ft_atoi`** - Converts string to integer

### Memory Functions
- **`ft_memset`** - Fills memory with a constant byte
- **`ft_bzero`** - Sets memory to zero
- **`ft_memcpy`** - Copies memory area (non-overlapping)
- **`ft_memmove`** - Copies memory area (handles overlapping)
- **`ft_memchr`** - Locates byte in memory area
- **`ft_memcmp`** - Compares memory areas

### Memory Allocation Functions
- **`ft_calloc`** - Allocates and zeros memory for array

## Compilation

To compile the library:
```bash
make
```

To use the library in your programs:
```bash
gcc your_program.c libft.a -o your_program
```

To clean object files:
```bash
make clean
```

To clean everything (objects + library):
```bash
make fclean
```

To recompile everything:
```bash
make re
```
