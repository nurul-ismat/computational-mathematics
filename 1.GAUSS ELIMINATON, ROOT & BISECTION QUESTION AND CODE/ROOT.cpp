//write a program for the root exist or not(interval given) with function


#include<iostream>
#include<cmath>
using namespace std;

double calculation(float a)
{
    return (pow(a,3)-(6*pow(a,2))+(11*a)-6);
}

int main()
{

    double x,y;
    cout<<"enter the value:\n";
    cin>>x>>y;


	if((calculation(x)*calculation(y))<0)
         cout<<"root exist";

     else
         cout<<"root not exist";

	return 0;
}

