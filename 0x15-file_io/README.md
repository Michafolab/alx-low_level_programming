_**File I/O**_


Project done during Full Stack Software Engineering studies at A. It aims to learn about how to handle files (open, close, read and write), file descriptors, system calls and file permissions in C language.



_**General**_
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
Allowed syscalls: read, write, open, close
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file
All your header files should be include guarded
Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...



_**Technologies**_
C files are compiled using gcc 4.8.4
C files are written according to the C90 standard
Tested on Ubuntu 14.04 LTS
Files

**All of the following files are programs written in C:**



_
**Filename**_                               _ ****	Description****_

0-read_textfile.c           	          Reads a text file and prints it to the POSIX standard output


1-create_file.c	                        Function that Creates a file


2-append_text_to_file.c               	Function That aappends text at the end of a file


3-cp.c                                	Copies the content of a file to another file


100-elf_header.c	                      Displays the information contained in the ELF header at the start of an ELF file
