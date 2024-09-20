#include<iostream>
#include<string>
using namespace std;
int main()
{
   string name;
   int at,ct,na,nc,charity,ta,da,ada;
   cout<<"Enter the movie name: ";
   cin>>name;
   cout<<"Enter the adult ticket price: $";
   cin>>at;
   cout<<"Enter the child ticket price: $";
   cin>>ct;
   cout<<"Enter the number of adult tickets sold: ";
   cin>>na;
   cout<<"Enter the number of child tickets sold: ";
   cin>>nc;
   cout<<"Enter the percentage of amount to be donated for charity: ";
   cin>>charity;
   cout<<"Movie: "<<name<<endl;
   ta=(at*na)+(ct*nc);
   cout<<"Total amount generated from ticket sales: $"<<ta<<endl;
   da=ta/charity;
   cout<<"Donation to charity("<<charity<<"%): $"<<da<<endl;
   ada=ta-da;
   cout<<"Remaining amount after donation: $"<<ada;   
   return 0;
}