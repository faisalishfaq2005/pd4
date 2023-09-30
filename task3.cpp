#include <iostream>
using namespace std;

void Name(string name,double price)
{
if (name=="Pakistan")
{
double dis=0.95 * price;
cout<< "Final ticket price after discount: $"<< dis;
}
else if (name=="Ireland")
{
double dis=0.90 * price;
cout<< "Final ticket price after discount: $"<< dis;
}
else if (name=="India")
{
double dis=0.80 * price;
cout<< "Final ticket price after discount: $"<< dis;
}
else if (name=="England")
{
double dis=0.70 * price;
cout<< "Final ticket price after discount: $"<< dis;
}
else if (name=="Canada")
{
double dis=0.55 * price;
cout<< "Final ticket price after discount: $"<< dis;
}
}

main()
{
string name;
double price;
cout << "Enter the country's name: ";
cin>> name;
cout << "Enter the ticket price in dollars: $";
cin>> price;
Name(name,price);
}
