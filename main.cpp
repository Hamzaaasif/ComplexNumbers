#include<iostream>
#include "ComplexNumber.h"
using namespace std;
int main()
{
  ComplexNumber z1(2,3);
  ComplexNumber z2(3,5);
  ComplexNumber z3;
  z3=z1.add(z2);
  z2.display();
  z1.display();
  z3.display();
  z3=z1+z2;
  z3.display();
  cout<<z3;
  cout<<z2<<endl<<z3<<endl;
 system("pause");
}