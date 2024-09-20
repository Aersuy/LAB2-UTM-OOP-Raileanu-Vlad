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
Stack::~Stack()
{
    delete[] c_elements;
}

bool Stack::IsEmpty()
{
    if (c_top == -1)
    {
        return true;
    }
    else
    {
        return 0;
    }
}
bool Stack::IsFull()
{
    if (c_top == c_maxSize)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Stack::Push(int data)
{  if (this->IsFull())
{    std::cout << "Stack is full \n";
    return;
}


    c_top++;
   c_elements[c_top] = data;
}

void Stack::Pop()
{
    if (this->IsEmpty())
    {
        std::cout << "Stack is empty \n";
        return;
    }
    c_top--;
}
void Stack::printElem()
{
      for (int i = 0; i <= c_top; i++)
     {
         std::cout << c_elements[i] << '\n';
     }
   
}