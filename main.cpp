#include "stack.cpp"
#include "matrix.cpp"

int main()
{
   Matrix m1;
   m1.fillMatrix();
   m1.printMatrix();
  
   Matrix m2{m1};
   m1.multiplyNumber(3);
   m1.printMatrix();
  
   Matrix m3{m1.multiplyM(m2)};
   m3.printMatrix();
    
}