//given a string of characters, check if a single key(alphabet) is present or not
#include<iostream>
using namespace std;
bool checkkey(string str, int i, int n, char key){

//base case
if(i>=n)
return false;

//solve one case
if(str[i]==key)
return true;

//recursive reltion
return checkkey(str, i+1 ,n ,key);
}
int main(){
string str="India";
int n=str.length();
char key='a';
int i=0;

bool ans = checkkey(str, i, n, key);
cout<< "answer is: " << ans <<endl;

return 0;
}

//here we cn also give input as pass by reference in the checkkey function, as it wil not have much difference in execution but it reduces space complexity
//bool checkkey(string& str, int& i, int& n, char& key) <-------like this