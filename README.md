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

### String Functions
- **`ft_strlen`** - Calculates the length of a string

### Memory Functions
- **`ft_memset`** - Fills memory with a constant byte
- **`ft_bzero`** - Sets memory to zero
- **`ft_memcpy`** - Copies memory area (non-overlapping)

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
