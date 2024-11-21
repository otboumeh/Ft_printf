# ft_printf

## Overview

The **ft_printf** project is a key exercise in the 42 curriculum that involves creating a custom implementation of the standard `printf` function. This project helps strengthen your understanding of variadic functions, format specifiers, and memory management in C.

---

## Features

- Supports the most common format specifiers like `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, and more.
- Allows output of various data types, such as characters, strings, integers, and unsigned integers.
- Manages different flags, widths, and precision modifiers for formatting.
- Handles edge cases like negative numbers, null pointers, and special characters.
  
---

## Functions Implemented

- `ft_printf`  
  The main function that emulates the behavior of `printf`. It handles the parsing of the format string, calls the respective functions to print values, and returns the total number of characters printed.
  
- `ft_putnbr_base`  
  A helper function used to convert numbers into their respective base (e.g., hexadecimal, decimal).
  
- `ft_putchar_fd`  
  Writes a character to the specified file descriptor.
  
- `ft_putstr_fd`  
  Writes a string to the specified file descriptor.

- `ft_putnbr_fd`  
  Writes an integer to the specified file descriptor.

---

## How It Works

1. **Parsing the Format String:**  
   The function starts by scanning the format string passed to `ft_printf`, checking for format specifiers like `%d`, `%s`, etc.

2. **Handling Each Specifier:**  
   When a specifier is encountered, the corresponding function is called to handle the conversion (for example, `ft_putnbr_fd` for integers or `ft_putstr_fd` for strings).

3. **Memory Management:**  
   Memory for the strings or numbers is handled within the functions, and no memory leaks should occur.

4. **Returning the Total Number of Printed Characters:**  
   The function keeps track of the total number of characters printed and returns that value at the end.

---

## Limitations

- Only the most common format specifiers are implemented.
- Does not support the full range of possible flags or modifiers that `printf` in the C standard library supports.

---

## How to Use

1. Include the header file in your program:
   ```c
   #include "ft_printf.h"
2. Use the function in the following way:
   ```c
    int count = ft_printf("Hello, %s! The number is %d\n", "World", 42);
    printf("Printed %d characters.\n", count);

---

## Conclusion
The ft_printf project is an excellent way to dive deeper into C programming and master variadic functions, format specifiers, and low-level I/O operations.
It allows you to better understand how printf works internally, giving you the ability to create a highly flexible and optimized version of this standard function.
