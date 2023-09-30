#include <iostream>
using namespace std;

void Reverse(string inp)
{
if (inp=="true")
{
cout<< "false";
}
else if(inp=="false"){
cout<< "true";
}
}

main()
{
string inp;
cout << "Enter 'true' or 'false': ";
cin>> inp;
Reverse(inp);
}
