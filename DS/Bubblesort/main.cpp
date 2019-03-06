/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string.h>
using namespace std;

class student{
    int roll;
    char name[10];
    public:
    void getinfo(){
        cin>>roll;
        cin>>name;
    }
    void outinfo(){
        cout<<roll;
        cout<<name;
    }
    
    
    friend void sorting(student s[],int n);
    
};
void sorting(student s[],int n)
{
        for(int i=0;i<n;i++)
    {
            for(int j=0;j<n-1;j++)
            {
                if(s[j].roll > s[j+1].roll)
                {
                    
                   
                    int a = s[j].roll;
                    
                    s[j].roll = s[j+1].roll;
                    s[j+1].roll =a;
                    
                    //cout<<"value of a"
                    char s1[10],s2[10];
                    strcpy(s1,s[j].name);
                    strcpy(s2,s[j+1].name);
                    strcpy(s[j].name,s2);
                     strcpy(s[j+1].name,s1);
                    
                }
                    
            }
    }
    for(int i=0;i<n;i++){
        cout<<s[i].roll<<" "<<s[i].name <<endl;
    }
    
}

int main()
{
    printf("Bubble sort; enter length \n");
    int n;
    scanf("%d",&n);
    student s[n];
    for(int i=0;i<n;i++)
    {
    
        s[i].getinfo();
    }
   
    sorting(s,n);
    
    
    

    return 0;
}
