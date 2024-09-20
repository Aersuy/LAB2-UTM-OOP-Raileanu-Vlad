#include "stack.hpp"
#include <iostream>
Stack::Stack()
{
    c_maxSize = DEFAULT_STACK_SIZE;
    c_top = -1;
    c_elements = new int[DEFAULT_STACK_SIZE];
}
Stack::Stack(int size)
{
    c_maxSize = size;
    c_top = -1;
    c_elements = new int[size];
}

Stack::Stack(const Stack& copy)
{
     c_maxSize = copy.c_maxSize;
     c_top = copy.c_top;
     c_elements = new int[c_maxSize];
     for (int i = 0; i <= c_top; i++)
     {
        c_elements[i] = copy.c_elements[i];
     }
}