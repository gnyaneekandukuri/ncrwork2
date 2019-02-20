#include<iostream> 
using namespace std; 
  
class copying 
{ 
private: 
    int x, y; 
public: 
    copying(){x=0;y=0;}
    copying(int x1, int y1) { x = x1; y = y1; } 
  
    // Copy constructor 
    copying(const copying &p2) {x = p2.x; y = p2.y; } 
  
    int getX()            {  return x; } 
    int getY()            {  return y; } 
}; 
  
int main() 
{ 
    copying p1(10, 15); // Normal constructor is called here 
    copying p2 = p1; // Copy constructor is called here 
  
    // Let us access values assigned by constructors 
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY(); 
    cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY(); 
  
    return 0; 
}