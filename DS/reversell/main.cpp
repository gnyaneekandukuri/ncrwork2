#include <iostream>
using namespace std;
class node
{
 int data;
 node *next;
 friend class ll;
};
class ll
{
 public:
 node *head;
 ll()
 {
 head=NULL;
 }
 void insert(int x)
 {
 if(head==NULL)
 {
 head=new node;
 head->data=x;
 head->next=NULL;
 }
 else
 {
 node* temp=new node;
 temp->data=x;
 temp->next=head;
 head=temp;
 }
 }
 void display()
 {
 node*temp;
 temp=head;
 while(temp->next!=NULL)
 {
 cout<<temp->next;
 temp=temp->next;
 }
 }
 void reversal()
 {
 node *current,*prev,*next;
 current=head;
 prev=NULL;
 while(current!=NULL)
 {
 next=current->next;
 current->next=prev;
 prev=current;
 current=next;
 }
 head=prev;

 }
};
int main() {
ll obj;
obj.insert(2);
obj.insert(3);
obj.insert(4);
obj.display();
obj.reversal();
 obj.display();
return 0;
}