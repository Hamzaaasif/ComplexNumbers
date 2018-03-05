#include<iostream>
#include "ComplexNumber.h"
using namespace std;
int main()
{
  ComplexNumber z1(4,-3);
  ComplexNumber z2(-8,2);
  ComplexNumber z3;
  //z3=z1.add(z2);
  //z2.display();
  //z1.display();
  //z3.display();
  z3=z1+z2;
  //z3.display();
  cout<<"Addition:"<<endl<<z1<<endl<<z2<<endl<<z3<<endl;
  z3=z1-z2;
  cout<<"Subtraction:"<<endl<<z1<<endl<<z2<<endl<<z3<<endl;
  z3=z1*z2;
  cout<<"Multiplication:"<<endl<<z1<<endl<<z2<<endl<<z3<<endl;
  z3 = z1 / z2;
  cout<<"Division:"<<endl<<z1<<endl<<z2<<endl<<z3<<endl;
 system("pause");
}