# LIBFT  ![alvachon's 42 Libft Score](https://badge42.vercel.app/api/v2/clb9zrpvt00250fl97rqy9hie/project/2544750)  ![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

The first project at 42 quebec is to create a static library with original and homemade version of pre-existing functions in the C library.\
**Notice**  - I did some edits for my needs, this project is not compliant anymore.

This Libft work with a master libft.a file, but each part that make the big one can be compiled independently. The great thing about that, is that everything stay clean and flexible to add new part.

## Structure
[Linked List](https://github.com/alvachon/42_libft/blob/main/libft/linked_list/_include/linkedlist.h) -
[Number](https://github.com/alvachon/42_libft/blob/main/libft/number/_include/nbr.h) -
[String](https://github.com/alvachon/42_libft/blob/main/libft/string/_include/str.h) -
[Type](https://github.com/alvachon/42_libft/blob/main/libft/type/_include/typemem.h) -
[Write](https://github.com/alvachon/42_libft/blob/main/libft/write/_include/write.h)

## How to install
You will need basic [C compiler](https://www.w3schools.in/c-programming/install)
In my case, I work with gnu (gcc).

## How to compile only a part of the libft
Each sub folder of the library that I made can be compiled and added separatly in a project without breaking, because each of them have their own Makefile and generate an archive file (.a). Here's a demo:
```
cd libft/linked_list
make
```
You will now have a linkedlist.a !

## How to compile all the libft
```
make
```
### More commands
I will invite you to check the [master makefile](https://github.com/alvachon/42_libft/blob/main/libft/Makefile) and one of the [sub makefile](https://github.com/alvachon/42_libft/blob/main/libft/write/Makefile) to check other useful calls that you can make. 

## To do list
* Add get_next_line
* Add ft_printf
* Add my doubly_circular_linked_list
* Add Readme files with notes for each type
# Version
15
