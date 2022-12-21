#include <iostream>
using namespace std;
int main()
{

string name;
float matric;
float intermidiate;
float ecat;
float aggregate;
float matricpercentage;
float intermidiatepercentage;
float ecatpercentage;
float ecatagg;
float intermidiateagg;
float matricagg;


cout <<"Enter your name:"<<endl;
cin >>name ;
cout <<"Enter your matric marks:"<<endl;
cin >>matric;
cout <<"Enter your intermidiate marks:"<<endl;
cin >>intermidiate;
cout <<"Enter your ecat marks:"<<endl;
cin >>ecat;

matricpercentage=(matric/1100)*100;

intermidiatepercentage=(intermidiate/550)*100;

ecatpercentage=(ecat/400)*100;
matricagg=matricpercentage*0.1;

intermidiateagg=intermidiatepercentage*0.5;
ecatagg=ecatpercentage*0.4;


aggregate=ecatagg+intermidiateagg+matricagg;


cout <<"Your Total aggregate is:"<<aggregate;
}
