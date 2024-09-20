#include<iostream>
using namespace std;
int main()
{
   int min,fps,tfps;
   cout<<"Enter total number of minutes: ";
   cin>>min;
   cout<<"Enter frames per second: ";
   cin>>fps;
   tfps=(min*60)*fps;
   cout<<"Total number of frames: "<<tfps;
   return 0;
}