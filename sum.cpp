#include<iostream>
using namespace std;
int main()
{
    int digit,sum,a,b,c,d;
    cout<<"Enter a 4-digit number: ";
    cin>>digit;
    a=digit%10;
    digit=digit/10;
    b=digit%10;
    digit=digit/10;
    c=digit%10;
    digit=digit/10;
    d=digit%10;
    sum=a+b+c+d;
    cout<<"Sum of the individual digits: "<<sum; 
    return 0;
}