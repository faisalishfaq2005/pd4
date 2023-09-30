#include <iostream>
using namespace std;

void tpCheaker(int p,int r)
{
int num=(r*500)/(57*p);
if (num>=14)
{
cout<< "Your TP will last "<<num<<" days, no need to panic!";
}else{
cout<< "Your TP will only last "<<num<<" days, buy more!";
}
}

main()
{
int p,r;
cout << "Number of people in the household: ";
cin>> p;
cout << "Number of rolls of TP: ";
cin>> r;
tpCheaker(p,r);
}
