#include<iostream>
#include<string>
using namespace std;
int main()
{
   float weight,days;
   string name;
   cout<<"Enter the name of person: ";
   cin>>name;
   cout<<"Enter weight loss target in kilograms: ";
   cin>>weight;
   days=weight*15;
   cout<<"It would take "<<days<<" days for "<<name<<" to lose "<<weight<<" kilograms";
   return 0;
}