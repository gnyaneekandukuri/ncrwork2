//stack using linked list
#include <iostream>
using namespace std;
class node
{
 int data;
 node *next;
 friend class stack;
};
class stack
{
 public:
 node *top;
 stack()
 {
 top=NULL;
 }
 void push(int x)
 {
 if(top==NULL)
 {
 top=new node;
 top->data=x;
 top->next=NULL;
 }
 else
 {
 node *temp=new node;
 temp->data=x;
 temp->next=top;
 top=temp;
 }
 }
 void display()
 {
 node *temp=top;
 while(temp!=NULL)
 {
 cout<<temp->data<<endl;
 temp=temp->next;
 }
 }
 void pop()
 {
 if(top==NULL)
 {
 return;
 }
 else
 {
 node *temp=top;
 temp=temp->next;
 top=temp;
 }
 }


};
int main() {
// your code goes here
stack obj;
obj.push(1);
obj.push(2);
obj.push(3);
obj.push(4);
obj.display();
obj.pop();
obj.display();
return 0;
}