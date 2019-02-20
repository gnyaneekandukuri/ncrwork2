#include <iostream>
using namespace std;
class node
{
 int data;
 node*next;
 friend class ll;
};
class ll
{
 public:
node*head=NULL;
node*temp;
node*temp1;
 void insert(int x);
 void display();
 void deletion();

};
void ll::insert(int x)
{


 if(head==NULL)
 {
 node*temp=new node;
 temp->data=x;
 temp->next=NULL;
 }
 else
 {
 temp=new node;
 temp->data=x;
 temp->next=head;
 head=temp;

 }
}
void ll::display()
{
 node *temp1;
 temp1=head;
 if(temp1->next!=NULL)
 {

 cout<<temp1->data<<endl;
 temp1=temp1->next;
 }


}
int main() {
ll obj;
obj.insert(2);
obj.insert(4);
obj.insert(8);
obj.display();
return 0;
}