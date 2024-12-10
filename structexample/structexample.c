#include "structexample.h"

struct MyStruct get_mystruct_zero_initializer() {
    struct MyStruct my_struct = {0};
    return my_struct;
}

struct MyStruct get_mystruct_positional_initializer(char *name, int age) {
    struct MyStruct my_struct = {name, age};
    return my_struct;
}

struct MyStruct get_mystruct_designated_initializer(char *name, int age) {
    struct MyStruct my_struct = {
        .name = name,
        .age = age
    };
    return my_struct;
}
