#include<bits/stdc++.h>
using namespace std;
int main(){
int a, b; 
cout<<"********************************"<<endl;
cout<<"********************************"<<endl;
char o; 
cout<<"Enter the operater: ";
cin>>o; 
cout<<"Enter the two operands: ";
cin>>a>>b; 
switch (o)
{
case '+':
    cout<<"The sum of "<<a<<" and "<<b<<" is:"<<a+b; 
    break;

case '-':
    cout<<"The subtraction of "<<a<<" and "<<b<<" is:"<<a-b; 
    break;

case '*':
    cout<<"The multiplication of "<<a<<" and "<<b<<" is:"<<a*b; 
    break;

case '/':
    cout<<"The divison of "<<a<<" and "<<b<<" is:"<<a/b; 
    break;

case '%':
    cout<<"The mod of "<<a<<" and "<<b<<" is:"<<(a%b); 
    break;

default:cout<<"ERROR";
    break;
}

cout<<endl<<"********************************"<<endl;
cout<<"********************************"<<endl;

 return 0;
}