#include <iostream>
using namespace std;
int main()
{
int charge;
int time;
float current;
cout <<"Enter the amount of charge:"<<endl;
cin >>charge;
cout <<"Enter time:"<<endl;
cin >>time;
current=charge/time;
cout <<"The current is: "<<current;
return 0;
}