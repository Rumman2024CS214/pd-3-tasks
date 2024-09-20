#include<iostream>
using namespace std;
int main()
{
   float bag,cost,area,cpp,cps;
   cout<<"Enter the number of fertilizers bag in pounds: ";
   cin>>bag;
   cout<<"Enter the cost of these bags: $";
   cin>>cost;
   cout<<"Enter the area in sq. feet which can be covered: ";
   cin>>area;
   cpp=cost/bag;
   cps=cost/area;
   cout<<"Cost of bag per pound: $"<<cpp<<endl;
   cout<<"Cost of bag per sq. feet: $"<<cps;  
   return 0;
}