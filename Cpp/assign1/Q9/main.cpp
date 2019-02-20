#include<iostream>
using namespace std;
class swapC {
 
public:
 int x;
 int y;
 void value(int a,int b) {
  int c = a;
  a = b;
  b = c;
  cout << " function a ,b  " << a << b <<endl;
 }
 void ref(int &a, int &b) {
  int c = a;
  a = b;
  b = c;
  cout << " function a ,b  " << a << b <<endl;
  
 }

};
int main() {

 cout << "Enter a choice 1.Swap Value 2.Swap Reference";
 int choice,a,b;
 cin >> choice;
 switch (choice)
 {
 case 1:
  swapC s1;
  
  cin >>a>>b;
  cout << "a b before call" << a << b << endl;
  s1.value(a,b);
  cout << "a b after call" << a << b << endl;
  getchar();
  break;
 case 2:
  swapC s2;
  
  cin >> a >> b;
  cout << "a b before ref call" << a << b << endl;
  s1.ref(a,b);
  cout <<"a,b after ref call"<< a << b;
  getchar();
  break;
  
 default:
  
  break;
 }
 getchar();
}