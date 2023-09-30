#include <iostream>
using namespace std;

void flowerShop(int r, int w, int t)
{
double red=2;
double white=4.1;
double tulip=2.5;
double sum=(red*r)+(white*w)+(tulip*t);
if (sum>200)
{
double dis=0.8*sum;
cout<< "Original Price: $"<< sum<<endl;
cout<< "Price after Discount: $"<<dis;
}else{
cout<< "Original Price: $"<< sum<<endl;
cout<< "No discount applied.";
}
}

main()
{
int r,w,t;
cout << "Red Rose: ";
cin>> r;
cout << "White Rose: ";
cin>> w;
cout << "Tulips: ";
cin>> t;
flowerShop(r,w,t);
}
