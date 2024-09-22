#include "stack.cpp"
#include "matrix.cpp"
#include "menu.cpp"
int main()
{
   Matrix matrix1,matrix2,matrix3;
   Stack s1;
   int num1,num2;
   int alegere1{1};
   int alegere2,num;



  while (alegere1 != 0)
  {
   mainMenu();
   std::cin >> alegere1;
   switch (alegere1)
   {
   case 1:
      alegere2 = 1;
      while (alegere2 != 0)
      {
         stackMenu();
         std::cin >> alegere2;
         switch (alegere2)
         {
         case 1:
            s1 = Stack();
            break;
         case 2:
            std::cout << "Da marimea stackului \n";
            std::cin >> num;
            s1 = Stack(num);
            break;
         case 3:
            std::cout << "Da numarul \n";
            std::cin >> num;
            s1.Push(num);
         break;
         case 4:
         s1.Pop();
         break;

         case 5:
           if (s1.IsEmpty() == true)
           {
             std::cout << "Stackul e gol \n";
           }
           else
           {
            std::cout << "Stackul nu e gol \n";
           }
           
           
         break;

         case 6:
           if (s1.IsFull() == true)
           {
            std::cout << "Stackul e plin \n";
           }
           else
           {
            std::cout << "Stackul nu e plin \n";
           }
           
           
         break;

         case 7:
          s1.printElem();
         break;
         default:
            break;
         }
      }
      break;
      
      case 2:
      alegere2 = 1;
      while (alegere2 != 0)
      {
         matrixMenu();
         std::cin >> alegere2;

         switch (alegere2)
         {
         case 1:
           std::cout << "Da marimea matricei \n";
           std::cin >> num1;
           matrix1 = Matrix(num1);
            break;
         case 2:
            std::cout << "Da marimea matricei(2 parametri)\n";
           std::cin >> num1 >> num2;
           matrix1 = Matrix(num1,num2); 
         break;

         case 3:
            std::cout << "Da marimea noua a matrici(i si j)\n";
            std::cin >> num1 >> num2;
             matrix1.setM(num1,num2);
         break;

         case 4:
           std::cout << "Apasa 1 pentru matricea 1 si 2 pentru matricea 2 \n";
           std::cin >> num1;
           if (num1 == 1)
           {
            matrix1.fillMatrix();
           }
           else
           {
            matrix2.fillMatrix();
           }
           
         break;

         case 5:
           matrix2.subtractM(matrix1);
         break;

         case 6:
           matrix1.addM(matrix2);
         break;

         case 7:
         matrix3 = Matrix(matrix1.multiplyM(matrix2));
         break;

         case 8:
           matrix1.printMatrix();
           matrix2.printMatrix();
           matrix3.printMatrix();
         break;
         default:
            break;
         }
      }
      
      break;
   default:
      break;
   }
  }
  
    
}