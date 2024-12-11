#pragma once

typedef struct MyStruct {
    char *name;
    int age;
} my_struct_t;

struct MyStruct get_mystruct_zero_initializer();
struct MyStruct get_mystruct_positional_initializer(char *name, int age);
struct MyStruct get_mystruct_designated_initializer(char *name, int age);

typedef struct {
    char buff[10];
} my_buffer_t;

my_buffer_t make_my_buffer();
