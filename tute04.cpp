/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}


long Factorial(int no){

int i,mul=1;
for(i=1;i<=no;i++){

mul=mul*i;

}
return mul;

}

long nCr(int n, int r){

int i,mul1=1,mul2=1;
for(i=1;i<=r;i++){

mul1=mul1*i;
}

for(i=1;i<=(n-r);i++){

mul2=mul2*i;
}

return Factorial(n)/(mul1*mul2);

}
  

