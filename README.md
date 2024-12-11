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