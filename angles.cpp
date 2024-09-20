#include<iostream>
using namespace std;
int main()
{
   int side,sum;
   cout<<"Enter the number of sides of polygon: ";
   cin>>side;
   sum=(side-2)*180;
   cout<<"The sum of interior angles of "<<side<<" sided polygon is "<<sum<<" degrees";
   return 0;
}