#pragma once
#define DEFAULT_STACK_SIZE 9
class Stack {
private:
    int* c_elements;   
    int c_maxSize;      
    int c_top;          

public:
  
    Stack();


    Stack(int size);


    Stack(const Stack& other);


    ~Stack();

    void Push(int value);

    int Pop();


    bool IsEmpty();


    bool IsFull();
};


