# C - Structures, typedef

## General
  1. What are `structures`, when, why and how to use them
  2. How to use ` typedef`

### Task 0
  Define a new type `struct dog` with the following elements:
  * File: `dog.h`
  ```
  name, type = char * 
  age, type = float
  owner, type = char *
  ```

### Task 1: 
 A dog is the only thing on earth that loves you more than you love yourself
 * File: `1-init_dog.c`
 -> Write a function that initialize a variable of type `struct dog`
 Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`
 
### Task  2:

 A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
* File: `2-print_dog.c`
-> Write a function that prints a `struct dog`
Prototype: `void print_dog(struct dog *d);`

### Task 3:
 Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read
 * File: `dog.h`
 -> Define a new type `dog_t` as a new name for the type `struct dog`.
 
### Task 4:
 A door is what a dog is perpetually on the wrong side of
* File: `4-new_dog.c`
  -> Write a function that creates a new dog.
  Prototype: `dog_t *new_dog(char *name, float age, char *owner);`

1. You have to store a copy of `name` and `owner`
2. Return `NULL` if the function fails


### Task 5:
 How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
 
* File: `5-free_dog.c`
-> Write a function that frees dogs.
Prototype: `void free_dog(dog_t *d);`

