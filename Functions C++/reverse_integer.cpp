//Reverse of an integer

/*Example: 
num = 4562 
rev_num = 0
rev_num = rev_num *10 + num%10 = 2 
num = num/10 = 456
rev_num = rev_num *10 + num%10 = 20 + 6 = 26 
num = num/10 = 45
rev_num = rev_num *10 + num%10 = 260 + 5 = 265 
num = num/10 = 4
rev_num = rev_num *10 + num%10 = 2650 + 4 = 2654 
num = num/10 = 0 
*/
#include<iostream>
using namespace std;
int reverse(int n)
{
    int revno=0;
    while(n>0){
        revno=revno*10 + n%10;
        n=n/10;
    }
    return revno;
}
int main(){
int n;
cout<<"Enter a number:";
cin>>n;
cout<<"Reverse number is: "<<reverse(n);
return 0;
}