# Bootdev memory management course notes and example code

Struct layouts in memory(fields plus padding) depend on compiler and system architecture.

One strategy to order fields is from largest to smallest,(but keep char* and similar in the end of struct)
