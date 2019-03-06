#include <iostream>
using namespace std;
class node
{
 int data;
 node* next;

 public:
 friend class ll;
};
class ll
{
 public:
 node* head;

 ll()
 {
 head=NULL;
 }

 void insert(int x,int k)
 {
 node *temp=new node;
 node* prev; node* curr;
 
 temp=head;

 for(int i=1;i<k-1;i++)
 {
 prev=curr;
 curr=curr->next;
 }

 prev->next=temp;
 temp->next=curr;

 temp->data=x;

 }
 void del(int k)
 {
 node* temp;
 temp=head;

 for(int i=1;i<k-1;i++)
 {
 temp=temp->next;
 }

 temp=temp->next;

 }
 void display()
 {
 node*temp;
 while(temp->next!=NULL)
 {
 for(temp=head;temp->next!=NULL;temp=temp->next)
 {
 cout<<temp->data;
 }
 }
 }
 


};
int main()
{
 ll l;
 l.insert(2,1);
 l.insert(3,2);
 l.insert(4,3);
 l.display();
 l.del(2);
 l.display();

 return 0;
}