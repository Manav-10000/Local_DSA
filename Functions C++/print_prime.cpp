//print all prime no form 1 to n
#include<iostream>
using namespace std;
bool checkprime(int n)
{
    if(n<=1)
    {
    return false;
    }
    else
    {
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
        return false;
        }
        else 
        {
        return true;
        }
    }
    }
}
int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    for(int i=2; i<=n; i++)
    {
    bool isprime=checkprime(i);
    if(isprime){
        cout<<i<<" ";
    }
    }
}