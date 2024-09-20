#include<iostream>
using namespace std;
int main()
{
    float vp,fp,earn;
    int fkg,vkg;
    cout<<"Enter vegetable price per kilogram (in coins): ";
    cin>>vp;
    cout<<"Enter fruit price per kilogram (in coins): ";
    cin>>fp;
    cout<<"Enter total kilograms of vegetables: ";
    cin>>vkg;
    cout<<"Enter total kilograms of fruits: ";
    cin>>fkg;
    earn=(vkg*vp)/1.94+(fkg*fp)/1.94;
    cout<<"Total earnings in Rupees (Rps): "<<earn;
    return 0;
}