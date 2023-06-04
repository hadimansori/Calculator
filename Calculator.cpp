#include <iostream>
using namespace std;

class Calculator {
   private:
      double num1, num2;
      
   public:
      void input() {
         cout << "Enter first number: ";
         cin >> num1;
         cout << "Enter second number: ";
         cin >> num2;
      }
};

int main() {
   char op;
   Calculator calc;

   do {
      cout << "Select an operation (+,-,*,/): ";
      cin >> op;

      switch(op) {
         case '+':
            break;

         case '-':
            break;

         case '*':
            break;

         case '/':
            break;

         case 'q':
            break;

         default:
            cout<< "Invalid operation. Try again!" <<endl;
      }
   } while(op != 'q');

   return 0;
}
