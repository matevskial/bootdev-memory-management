#pragma once
#include <stdint.h>

typedef union {
  int v_int;
  char v_buff[15];
} int_or_char_array_t;

typedef union {
  int v_int;
  char *v_buff;
} int_or_char_pointer_t;

// example with inline struct
typedef union {
  struct {
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;
  } components;
  uint32_t rgba;
} color_t;
