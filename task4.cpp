#include <iostream>
using namespace std;

void cheakSpeed(int speed)
{
if (speed>100)
{
cout<< "Halt... YOU WILL BE CHALLENGED!!!";
}else{
cout<< "Perfect! You're going good.";
}
}

main()
{
int speed;
cout << "Speed: ";
cin>> speed;
cheakSpeed(speed);
}
