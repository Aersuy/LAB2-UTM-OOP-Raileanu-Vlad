#include "stack.cpp"
#include "matrix.cpp"
#include "menu.cpp"
int main()
{
   Matrix m1,m2,m3;
   Stack s1;
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
   
   default:
      break;
   }
  }
  
    
}