#include<iostream>
using namespace std;
main()
{
int y,d,w;
cout<<"Enter the number of days:";
cin>>d;
y=d/365;
w=d/7;
d=d-((y*365)+(w*7));
cout<<"year :"<<y<<"\nweeks:"<<w<<"\ndays:"<<d;
}
