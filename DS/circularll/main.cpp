//circular linked list implementation
#include <iostream>
using namespace std;
class node
{
 int data;
 node *next;
 friend class cll;
};
class cll
{
 public:
 node *head;
 cll()
 {
 head=NULL;
 }

 void insert(int x)
 {
 if(head=NULL)
 {
 head=new node;
 head->data=x;
 head->next=head;
 }
 else
 {
 node*temp=new node;
 temp->data=x;
 temp->next=head;
 head=temp;
 }
 }
 void display()
 {
 node *temp=head->next;
 cout<<head->data<<endl;
 while(temp!=head)
 {
 cout<<temp->data<<endl;
 temp=temp->next;
 }

 }
};
int main()
{
cll obj;
obj.insert(2);
 obj.insert(3);
obj.insert(4);
obj.insert(5);
obj.display();
return 0;
}