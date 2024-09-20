#include<iostream>
using namespace std;
int main()
{
   int sq,w,h,walls;
   cout<<"Number of square meter you can paint: ";
   cin>>sq;
   cout<<"Width of single wall (in meters): ";
   cin>>w;
   cout<<"Height of single wall (in meters): ";
   cin>>h;
   walls=sq/(w*h);
   cout<<"Numbers of walls you can paint: "<<walls;
   return 0;
   
    
}