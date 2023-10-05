#include<iostream>
using namespace std;
void calculateAggregate(string name,float matric,float fsc,float ecat);
void compareMarks(string namestd1,float ecatstd1,string namestd2,float ecatstd2);
main()
{
string  namestd2,namestd1,name,res;
float matric,fsc,ecat,ecatstd1,ecatstd2;
cout<< "Do you want to calculate aggregate of specific person or compare marks,press y for first option and n for second";
cin>> res;
if (res=="y")
{
cout << "Enter the student's Name ";
cin >> name;
cout << "Enter student's Matriculation Marks";
cin >> matric;
cout << "Enter student's FSC Marks";
cin >> fsc;
cout << "Enter student's Ecat Marks";
cin >> ecat;
calculateAggregate(name,matric, fsc, ecat);
}

else if (res=="n")
{
cout << "Enter the student 1 Name ";
cin>>namestd1;
cout << "Enter the student 2 Name ";
cin>>namestd2;
cout << "Enter student 1 Ecat Marks";
cin >> ecatstd1;
cout << "Enter student 2 Ecat Marks";
cin >> ecatstd2;
compareMarks(namestd1,ecatstd1,namestd2,ecatstd2);
}

}
void calculateAggregate(string name,float matric,float fsc,float ecat)
{
double aggregate=(ecat/400 * 0.5)+(matric/1100 * 0.1)+ (fsc/550 * 0.4);
double final_agg=aggregate*100;
cout << "Total aggregate of "<<name <<"is " << final_agg;
}
void compareMarks(string namestd1,float ecatstd1,string namestd2,float ecatstd2)
{
if (ecatstd1>ecatstd2)
{
cout<<namestd1<< " has first roll number";
}
else if(ecatstd2>ecatstd1)
{
cout<<namestd2<< " has first roll number";
}

}