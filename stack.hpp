#pragma once
#define DEFAULT_STACK_SIZE 9
class Stack {
private:
    int* c_elements;   
    int c_maxSize;      
    int c_top;          

public:
  
    Stack();


    Stack(int);


    Stack(const Stack&);


    ~Stack();

    void Push(int);
    void Pop();
    void printElem();
    bool IsEmpty();
    bool IsFull();
};


