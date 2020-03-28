# RE Snips

Try to create different test cases that are compiled for various compilers, architectures and performance optimizations.

# Cases

## ANSI C

- return_struct.c - [ARM gcc 8.2](https://godbolt.org/z/2LVZM7), [ARMv7-A Clang](https://godbolt.org/z/ptr9zT), [x86-64 gcc 9.3](https://godbolt.org/z/93X2Yk)
- my_memcpy.c - [ARM gcc 8.2 -O3](https://godbolt.org/z/RcLMNC), [ARMv7-A Clang -O3](https://godbolt.org/z/4wXY-V)
- signed_int_cmp.c - [ARM gcc 8.2 -O3](https://godbolt.org/z/VFwaQp)
- unsigned_int_cmp.c - [ARM gcc 8.2 -O3](https://godbolt.org/z/xUm-UW)
- scanf_printf_local.c - [ARM gcc 8.2 -O3](https://godbolt.org/z/52cLCQ)
- switch-3.c - [ARM gcc 8.2 -O3](https://godbolt.org/z/9Tr68Y)