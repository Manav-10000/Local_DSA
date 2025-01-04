#include<iostream>
using namespace std;
char grade(int marks){

if(marks>=90)
return 'A';

if(marks>=80)
return 'B';

if(marks>=70)
return 'C';

if(marks>=60)
return 'D';

else
return 'E';
}
int main(){
int marks;
cout<<"Enter the marks of students "<<endl;
cin>>marks;
char final_grade=grade(marks);
cout<<"The final grade is:"<<final_grade;
return 0;
}
