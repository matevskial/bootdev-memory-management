# Bootdev memory management course notes and example code

Struct layouts in memory(fields plus padding) depend on compiler and system architecture.

One strategy to order fields is from largest to smallest,(but keep char* and similar in the end of struct)

ITs possible to type cast arrays(pointers)

for example

```c
my_struct_t arr = {...}
int *ptr = (int *) arr;
```

then iterating over this array would print all int values(what-ever is in each sizeof(int) block of memory)

Note about sizeof of array and pointer
```c
// this always returns platform-depentend size
int *ptr = &some_var
sizeof(ptr)

// this returns actual size of array
int arr[10];
sizeof(arr);
```

Arrays decay to pointer when:

* passing to function
* using pointer arithmetics such as `int *ptr = arr` or `int value = *(arr + 2)`

There exists a "pointer to array", or pointer to "not decayed" array, which is different from pointer to first element

C strings are:

* How we represent text in C programs
* Any number of characters (chars) terminated by a null character ('\0').
* A pointer to the first element of a character array.

`char first[50] = "Snek";` is array of chars of 50 elements but adds '\0' after the char 'k'.

Undefined behavior may happen when C string library work with char* that are not null-terminated.

`strcpy`, `strcat` and `strncat` add '\0' after operation: `strcpy` needs source to end with '\0', `strcat` needs both source and destination
to end with '\0', `strncat` needs at least destination to end with '\0'.

`strncpy` does not add '\0' after operation

Forward declarations are used for self-referencing or circular referencing of types in structs:

```c
typedef struct Computer computer_t;
typedef struct Person person_t;

struct Person {
  char *name;
  computer_t *computer;
};

struct Computer {
  char *brand;
  person_t *owner;
};
```

This is how to return new struct

```c
return (my_struct_t){
  .name = "abc",
  .age = 230
};
```

Padding is added for unions too, see `unionexample/unionexample.h`
