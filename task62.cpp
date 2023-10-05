# include <iostream>
using namespace std;
void H();
void A();
void S();
void N();
main()
{
H();
cout<<endl;
A();
cout<<endl;
S();
cout<<endl;
S();
cout<<endl;
A();
cout<<endl;
N();
}
void H()
{
cout << "##    ##"<<endl<<
        "##    ##"<<endl<<
        "########"<<endl<<
        "##    ##"<<endl<<
        "##    ##"<<endl;
} 
void A()
{
cout << " #### " <<endl;
cout << "##  ##" <<endl;
cout << "######" <<endl;
cout << "##  ##" <<endl;
cout << "##  ##" <<endl;
cout << "##  ##"<<endl;

}
void S()
{
cout << " #### " <<endl;
cout << "##  ##" <<endl;
cout << "##    " <<endl;
cout << " #### " <<endl;
cout << "    ##" <<endl;
cout << "##  ##" <<endl;
cout << " #### " <<endl;

}
void N()
{
cout << "###  ##"<<endl;
cout << "  ## ##"<<endl;
cout << " # ## #"<<endl;
cout << " ## ## "<<endl;
cout << " ##  ##"<<endl;
cout << " ##  ##"<<endl;
cout << "###  ##"<<endl;
}
