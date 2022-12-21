#include <iostream>
using namespace std;
int main()
{
int megabytes;
int bits;
int kb;
int bytes;
cout <<"Enter the amount of megabytes:"<<endl;
cin >>megabytes;
bits=8*1024*1024*megabytes;
cout <<"The bits are "<<bits;
}
