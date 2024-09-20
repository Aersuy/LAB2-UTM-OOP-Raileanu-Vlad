#include "matrix.hpp"
#include <iostream>
#pragma once
#define DEFAULT_MATRIX_PARAMATER 3
Matrix::Matrix()
{
   c_i = DEFAULT_MATRIX_PARAMATER;
   c_j = DEFAULT_MATRIX_PARAMATER;
   alocare(c_i,c_j);
}
Matrix::Matrix(int size)
{
    c_i = size;
    c_j = size;
    alocare(c_i,c_j);
}
Matrix::Matrix(int i,int j)
{
   c_i = i;
   c_j = j;
   alocare(c_i,c_j);
}
Matrix::Matrix(const Matrix& other)
{
   c_i = other.c_i;
   c_j = other.c_j;
   alocare(c_i,c_j);
   for (int iterator1 = 0; iterator1 < c_i; iterator1++)
   {
      for (int iterator2 = 0; iterator2 < c_j; iterator2++)
      {
         c_elem[iterator1][iterator2] = other.c_elem[iterator1][iterator2];
      }
      
   }
   
}
Matrix::~Matrix()
{
   dealocare();
}

void Matrix::dealocare() {
        if (c_elem) {
            for (int i = 0; i < c_i; ++i) {
                delete[] c_elem[i];  
            }
            delete[] c_elem;  
            c_elem = nullptr;
        }
    }
void Matrix::alocare(int rows, int cols) {
        c_elem = new float*[rows]; 
        if (!c_elem) {
            c_error = 1; 
            return;
        }

        for (int i = 0; i < rows; ++i) {
            c_elem[i] = new float[cols]; 
            if (!c_elem[i]) {
                c_error = 1;  
                dealocare (); 
                return;
            }
        }

        c_error = 0;  
    }

void Matrix::setM(int i, int j)
{
   c_i = i;
   c_j = j;
   dealocare();
   alocare(c_i,c_j);
}
void Matrix::returnM()
{
   std::cout << c_i << " randuri \n";
   std::cout << c_j << " coloane \n";
}
void Matrix::addM(const Matrix& m)
{
    if (c_i != m.c_i || c_j != m.c_j)
    {
        c_error = 2;
        std::cout << "Marime diferite \n";
    }
    for (int iterator1 = 0; iterator1 < c_i; iterator1++)
    {
        for (int iterator2 = 0; iterator2 < c_j; iterator2++)
        {
            c_elem[iterator1][iterator2] += m.c_elem[iterator1][iterator2];
        }
        
    }
    
    
}
void Matrix::subtractM(const Matrix& m)
{
    if (c_i != m.c_i || c_j != m.c_j)
    {
        c_error = 2;
        std::cout << "Marime diferite \n";
    }
    for (int iterator1 = 0; iterator1 < c_i; iterator1++)
    {
        for (int iterator2 = 0; iterator2 < c_j; iterator2++)
        {
            c_elem[iterator1][iterator2] -= m.c_elem[iterator1][iterator2];
        }
        
    }
    
}
Matrix Matrix::multiplyM(const Matrix& m)
{
    if (c_i != m.c_j)
    {   std::cout << "Eroare de marime";
        c_error = 2;
        return;
    }
    Matrix n(c_i,m.c_j);
    
    for (int iterator1 = 0; iterator1 < c_i; iterator1++) {
        for (int iterator2 = 0; iterator2 < m.c_j; iterator2++) {
 
            for (int iterator3 = 0; iterator3 < m.c_i; iterator3++) {
                 n.c_elem[iterator1][iterator2] += c_elem[iterator1][iterator3]* m.c_elem[iterator3][iterator1];
            }
        }

    }
    return n;
}
void Matrix::multiplyNumber(int num)
{
    for (int iterator1 = 0; iterator1 < c_i; iterator1++)
    {
      for (int iterator2 = 0; iterator2 < c_j; iterator2++)
      {
        c_elem[iterator1][iterator2] = c_elem[iterator1][iterator2] * num; 
      }
         
    }
    
}