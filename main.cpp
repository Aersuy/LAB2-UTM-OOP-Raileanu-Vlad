#include "stack.cpp"


int main()
{
    Stack s{2};
    if (s.IsEmpty() == 1)
    {
        std::cout << "Stackul e gol \n";
    }
    else
    {
        std::cout << "Ceva nasol sa intamplat \n";
    }
    s.Push(5);
    s.Push(6);
    s.Push(7);
    s.Push(8);
    s.Pop();
    s.printElem();
    Stack s2{s};
    s.printElem();
    
}