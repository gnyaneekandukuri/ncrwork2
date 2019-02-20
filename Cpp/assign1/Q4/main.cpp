

#include<iostream>
using namespace std;
inline int add(int a, int b)
{
 return a + b;
}
inline int sub(int a, int b)
{
 return a - b;
}
inline int mul(int a, int b)
{
 return a * b;
}
inline float divi(float a, int b)
{
 return a/b;
}
inline int mod(int a, int b)
{
 return a%b;
}


int main() {
 cout << "Add " <<  add(5, 6) <<endl;
 cout << "sub " <<   sub(5, 6) << endl;
 cout << "mul " <<   mul(5, 6) << endl;
 cout << "div " <<   divi(5, 6) << endl;
 cout << "mod " <<   add(5, 6) << endl;
 getchar();
 return 0;
}
