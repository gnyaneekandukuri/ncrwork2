

#include<iostream>
using namespace std;
class complex {
 float real;
 float img;
public:
 complex()
 {
  real = 0;
  img = 0;
 }
 complex(float a) {
  real = a;
  img = a;
 }
 complex(float a, float b) {
  real = a;
  img = b;
 }
 void printc() {
  cout << "real" << real << endl;
  cout << "img" << img;
  getchar();
 }
 friend complex addComplex(complex &c1, complex &c2);
 friend complex mulComplex(complex &c1, complex &c2);

};
complex addComplex(complex &c1, complex &c2) {
 c1.real = c1.real + c2.real;
 c1.img =  c1.img + c2.img;
 return c1;
}
complex mulComplex(complex &c1, complex &c2) {
 c1.real = (c1.real*c2.real) - (c1.img * c2.img);
 c1.img = (c1.real*c2.img) + (c1.img * c2.real);
 return c1;
}
int main() {
 complex c1(2, 4), c2(4, 7), c3;
 mulComplex(c1, c2);
 c1.printc();
 
 return 0;
}