#include<iostream>
using namespace std;
int main()
{
   int acc,iv,fv,time;
   cout<<"Enter Initial velocity(vi): ";
   cin>>iv;
   cout<<"Enter Acceleration(a): ";
   cin>>acc;
   cout<<"Enter Time(t): ";
   cin>>time;
   fv=(acc*time)+iv;
   cout<<"Final velocity(vf): "<<fv;  
   return 0;
}