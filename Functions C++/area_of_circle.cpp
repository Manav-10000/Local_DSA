#include<iostream>
using namespace std;
float area(int r)
{
    float ar=3.14*r*r;
    return ar;
}
int main(){
    float r;
    cout<<"Enter the radius in cm"<<endl;
    cin>>r;

    cout<<"The area of circle is: "<<area(r)<<"cm"<<endl;
    return 0;

}