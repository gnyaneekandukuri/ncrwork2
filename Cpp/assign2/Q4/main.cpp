/*Define a complex class, define default constructor, parameterized constructors, copy
constructor, destructor. Overload +, -, unary -, ++ (prefix, postfix), =, comma (,), ->,
<< and >> operators.*/

#include<iostream>
using namespace std;
template<class T>
class complex{
  int real;
  int imag;
  public:
  complex(){
      real =0;
      imag =0;
  }
  complex(int x,int y){
      real =x;
      imag =y;

  }

complex operator+(complex c)
{
    complex temp;
   temp.real = real+c.real;
   temp.imag = imag+c.imag;
   return temp;
}
complex operator-(complex c){
     complex temp;
   temp.real = real-c.real;
   temp.imag = imag-c.imag;
   return temp;
}
void out(){
    cout<<"real "<<real;
    cout<<"imag "<<imag<<endl;

}
complex operator=(complex c){
   real = c.real;
   imag = c.imag;
    return *this;
}
void operator-(){
    real = -real;
    imag = -imag;
   
}
complex operator,(complex c){
    
    return c;
}
complex operator++(){
    real = real+1;
    imag = imag +1;
    return *this;
}


//postfix
complex operator++(int x){
    complex old;
    old.real =real;
    old.imag =imag;
    real++;
    imag++;
    return old;
}

/*int operator->(int a){
    return real;
    
}*/
friend istream & operator>>(istream &cin,complex &c);
friend ostream & operator<<(ostream &cout,complex &c);  
 

};
istream & operator>>(istream &cin,complex &c) {
    
    cin >> c.real;
    cin >> c.imag;
    return (cin);
    
}
ostream & operator<<(ostream &cout,complex &c) {
    
    cout << c.real;
    cout << c.imag;
    return (cout);
    
}



int main(){

    complex c1(5,7),c2(6,7),c3,c4,c5,c6(-7,-8),c7;
     // cin>>c7;
    c3 = c1+c2;
    c4 = c1-c2;
    c5 = c1;
    -c6;
    
    c3.out();
    c4.out();
    c5.out();
    c6.out();
    c6=(c1,c2,c3);
    c5=(c1++);
   //int a= c1->real;
   //cout<<"a"<<a;
    c5.out();
  
    c7.out();

}
