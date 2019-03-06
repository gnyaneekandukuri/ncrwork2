/* Define STUDENT class with data members rollno, name, marks of subjects, total
marks, and grade. Overload >> for reading the STUDENT details, Overload << for
displaying the STUDENT details, include a friend function generate_results
(STUDENT [], int n); which takes an array of STUDENT objects corresponding to n
students and generates total marks and grade for each of the student. Please display
the results of all students using overloaded << operator.*/
#include<iostream>
#include<string>
using namespace std;
class student{

     int rollno;
     char name[10];
     int m1,m2,m3;
     int total;
     char grade;
     public:
     friend char generate(student s[],int n);
    friend ostream & operator << (ostream &cout,  student &c); 
    friend istream & operator >> (istream &cin,  student &c); 

};
istream & operator>> (istream &cin,student &c)
{
 cout<<"Enter rollno,name,m1,m2,m3,total marks,grade";
  cin>>c.rollno;
  cin >>c.name;
   cin >>c.m1>>c.m2>>c.m3;
   cin>>c.total;
  // cin>>c.grade;
   return(cin);

}
ostream & operator<<(ostream &cout,student &c){
cout<<"rollno"<<c.rollno<<endl;
  cout <<"name"<<c.name<<endl;
   cout <<"marks "<<c.m1<<" "<<c.m2<<" "<<c.m3<<endl;
   cout<<"total"<<c.total<<endl;
   cout<<"grade"<< c.grade<<endl;
   return(cout);

}
char generate(student s[],int n ){
  for(int i=0;i<n;i++){
      if(s[i].total > 90 ){
          s[i].grade ='A';
      }
      if(s[i].total > 80 && s[i].total < 90 ){
          s[i].grade ='B';
      }
      else{
           s[i].grade ='C';
      }

  }

}
int main(){
    int n;
     cout<<"Enter number of students";
     cin>>n;
     student s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    
       generate(s,n);
     for(int i=0;i<n;i++){
        cout<< "Student "<<s[i] << endl;
    }
    
    return 1;
}