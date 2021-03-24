#include <iostream>
using namespace std;
int main ()
{

double mili_meter,kilo_meter;
double result;
int check;



do
{


cout<<"Enter a Number To Convert"<<endl;
cin>>mili_meter;

result =mili_meter*1/1000;

cout<<"Convert From mili Meter "<<endl;
cout<<"Convert From to Meter"<<endl;
cout<<"Convertion Number Is "<<mili_meter<<endl;

cout<<"The Result Is "<<result<<endl;



cout<<"Press 1 to Continue"<<endl;
cin>>check;


}
while(check==1);


}

