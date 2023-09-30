#include <iostream>
using namespace std;

void pet(int h)
{
int work=365 - h;
int time=(h*127)+(work*63);
int diff=30000-time;
if (time<=30000)
{
int hour=diff/60;
int min=diff%60;
cout<< "Tom sleeps well"<<endl;
cout<< hour<< " hours and "<<min<<" minutes less for play";
}else{
int hour=abs(diff/60);
int min=abs(diff%60);
cout<< "Tom will run away"<<endl;
cout<< hour<< " hours and "<<min<<" minutes for play";
}
}

main()
{
int h;
cout << "Holidays: ";
cin>> h;
pet(h);
}
