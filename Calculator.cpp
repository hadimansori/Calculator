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
      
      void add() {
         cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
      }
      
      void subtract() {
         cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
      }
      
      void multiply() {
         cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
      }
      
      void divide() {
         if(num2 == 0) {
            cout<< "Cannot divide by zero!" << endl;
         } else {
            cout << num1 << " / " << num2 << " = " << num1/num2 << endl;
         }
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
            calc.input();
            calc.add();
            break;

         case '-':
            calc.input();
            calc.subtract();
            break;

         case '*':
            calc.input();
            calc.multiply();
            break;

         case '/':
            calc.input();
            calc.divide();
            break;

         case 'q':
            break;

         default:
            cout<< "Invalid operation. Try again!" <<endl;
      }
   } while(op != 'q');

   return 0;
}
