#include<iostream>
using namespace std;
class polar
{
    static int n;
    int x,y;
    public:
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


};
int polar::n;
int main(){
    polar p1,p2(5,6);
    cout<<"Number of objects"<<polar.n<<endl;
    return 1;

}