#include<iostream>
using namespace std;
int main()
{
    int age,hm,avg;
    cout<<"Enter the person's age: ";
    cin>>age;
    cout<<"Enter the number of times they've moved: ";
    cin>>hm;
    avg=age/(hm+1);
    cout<<"Average number of years lived in the same house: "<<avg;
    return 0;
    
}