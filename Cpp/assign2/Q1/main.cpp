#include<iostream>
using namespace std;
class polar
{
     
    int x,y;
    public:
   static int n;
    polar()
    {
        n++;
        x=0;
        y=0;
    }
    polar(int a,int b){
        n++;
        x=a;
        y=b;

    }
    int print()
{
    return n;
}

};
int polar::n;
int main(){
    polar p1,p2(5,6);
    cout<<"Number of objects"<<polar::n<<endl;
    polar p3;
    cout<<p1.print();
    return 1;

}