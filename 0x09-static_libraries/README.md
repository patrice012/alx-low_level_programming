# 0x09. C - Static libraries FROM`ALX AFRICA`program

General What is a static library, how does it work, how to create one, and how to use it

Basic usage of ar, ranlib, nm

## Tasks

### 0.[A library is not a luxury but one of the necessities of life](https://github.com/patrice012/alx-low_level_programming/tree/main/0x09-static_libraries)
* Functions;  

```
int _putchar(char c);  
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
```


* Follow the step to create static library
1. First compile all `.c` files to get our object files .o files. `gcc -c *c`
2. Create a static library from our object files. `ar rc libmy.a *.o`
3. Check if the static library was created successfully. `ar -t libmy.a`
4. We confirm if our object files were linked successfully. `nm libmy.a`

* Compile the main code to test our static library this way: `gcc -std=gnu89 main.c -L. -lmy -o quote`

if you like you can execute the program `./quote `

**Note** Create a static library  

    * gcc -c *.c > This converts .c files to .o (object) files  

    * ar rc libmy.a *.o > This creates the static library "Libmy.a"  

    * ar -t libmy.a > This lists all files in libmy.a   

### 1. [Without libraries what have we? We have no past and no future](https://github.com/patrice012/alx-low_level_programming/tree/main/0x09-static_libraries)

**TOPIC**

Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.

### STEPS:

1. Create `create_static_lib.sh` file usin Vi, Vim or other text editor
2. open `create_static_lib.sh` and puts all following lines  
    _shebang_ > `!#/bin/bash`

    *compile without linking files* > `gcc -c *.c`

    *create liball.a archive using all objects files* > `ar rc liball.a *.o`

    *index liball.a* > `ranlib liball.a`

3. Exit file and type in command line `chmod o+x create_static_lib.sh`.
    this command will make `create_static_lib.sh` file executable for all users
4. Type `./create_static_lib.sh` for final result
