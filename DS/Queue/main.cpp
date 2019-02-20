//queue using array
#include <iostream>
using namespace std;
class queue
{
 int a[10];
 int front,rear;

 public:
 queue()
 {
 front=rear=-1;

 }
 void insert(int x)
 {
 if(rear>9)
 {
 cout<<"queue overflow";
 }
 else
 a[++rear]=x;

 }
 void del()
 {
 if(front==rear)
 {
 cout<<"empty queue";
 }
 else
 cout<<"deleted element is:"<<a[++front];
 }
 void display()
 {
 if(front==rear)
 {
 cout<<"empty queue";
 }
 else
 {
 cout<<"queue:";
 for(int i=front+1;i<=rear;i++)
 {
 cout<<a[i];
 }
 }
 }
};
int main()
{
 queue q;
 q.insert(5);
 q.insert(7);
 q.insert(9);
 q.display();
 q.del();
 q.display();
 return 0;
}