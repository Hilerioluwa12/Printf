0x11. C - printf

1. Requirements

	<p>Here are the general requirements: </p>
	<ul>	
	<li> Allowed editors: vi, vim, emacs </li>
	<li>All your files will be compiled on Ubuntu 14.04 LTS</li>
	<li>Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic</li>
	<li>All your files should end with a new line</li>
	<li>A README.md file, at the root of the folder of the project is mandatory Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl</li>
	<li>You are not allowed to use global variables</li>
	<li>No more than 5 functions per file</li>
	<li>In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples</li>
	<li>The prototypes of all your functions should be included in your header file called holberton.h</li>
	<li>Don’t forget to push your header file</li>
	<li>All your header files should be include guarded</li>
	<li>Note that we will not provide the _putchar function for this project</li>
	</ul>

2. Compilation
	- The code must be compiled this way: $ gcc -Wall -Werror -Wextra -pedantic *.c
	- As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
	- Our main files will include your main header file (holberton.h): #include holberton.h
	- You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf.

3. Overview:
	This project consists of a custom made printf function for C language that allows different input arguments and options; its development was part of an intensive coding program in Holberton School Tunis.

4. Description and synopsis of the project:
	The function returns the number of characters printed (excluding the null byte used to end output to strings). If an output error is encountered, a negative value of -1 is returned.

	- The prototype: 
	- The main function of the printf function project:
	> _printf.c
	- The header file that connects all of the files in the project and allows functions and structures to work with each other through prototype statements:
	> main.h

5. Compiling & Testing:
	- The project was compiled and tested with GNU GCC 5.4.0 with different error flags:
	> $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89

	> -Wall: Enables all the warnings about constructions.

	> -Werror: Enables some extra warning flags that are not enabled by -Wall.

	> -Wextra: Make all warnings into hard errors.

	> -pedantic: Issue all the mandatory diagnostics listed in the C standard.

	> -std=gnu89: gcc ANSI standard version.

6. Authors
	> Martins Abayomi Adebayo - @Hilerioluwa12 <a href="https://github.com/Hilerioluwa12"> </a>
	>
