# 0x09. C - Static libraries FROM`ALX AFRICA`progam

General What is a static library, how does it work, how to create one, and how to use it

Basic usage of ar, ranlib, nm

## Tasks

### 0.[A library is not a luxury but one of the necessities of life](https://github.com/patrice012/alx-low_level_programming/tree/main/0x09-static_libraries)
* Functions;
`
 int _putchar(char c);<br>
 int _islower(int c);
 int _isalpha(int c);
 int _abs(int n);
 int _isupper(int c);
 int _isdigit(int c);
 int _strlen(char *s);
 void _puts(char *s);
 char *_strcpy(char *dest, char *src);
 int _atoi(char *s);
 char *_strcat(char *dest, char *src);
 char *_strncat(char *dest, char *src, int n);
 char *_strncpy(char *dest, char *src, int n);
 int _strcmp(char *s1, char *s2);
 char *_memset(char *s, char b, unsigned int n);
 char *_memcpy(char *dest, char *src, unsigned int n);
 char *_strchr(char *s, char c);
 unsigned int _strspn(char *s, char *accept);
 char *_strpbrk(char *s, char *accept);
 char *_strstr(char *haystack, char *needle);
`

* Follow the step to create static library
1. First compile all `.c` files to get our object files .o files. `gcc -c *c`
2. Create a static library from our object files. `ar rc libholberton.a *.o`
3. Check if the static library was created successfully. `ar -t libmy.a`
4. We confirm if our object files were linked successfully. `nm libmy.a`

* Compile the main code to test our static library this way: `gcc -std=gnu89 main.c -L. -lmy -o quote`

if you like you can execute the program `./quote `
