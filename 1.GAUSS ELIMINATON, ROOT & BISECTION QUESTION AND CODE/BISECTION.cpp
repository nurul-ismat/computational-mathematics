//write a program find the root using Bisection method

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double calculation(double a)
{
    return (pow(a,3)-(6*pow(a,2))+(11*a)-6);


}
double value_c(double m,double n)
{
    return (m+n)/2;
}

int main()
{

    double x,y,z,e=0.0001,f_c;
    cout<<"enter two value:\n";
    cin>>x>>y;
    int i=0;


    if((calculation(x)*calculation(y))<0)

    {
        cout<<"\n\nhas a root"<<endl<<endl<<endl;

        cout<< "  a\t" << "   b\t"<< "    f(c)\n";

        do
        {
            z=value_c(x,y);
            f_c=calculation(z);

            cout<<fixed<<setprecision(5)<<x<<"  "<<y<<"  "<<f_c<<"  "<<endl;

            if((calculation(x)*calculation(z))<0)

                y=z;
            else
                x=z;
            i++;

        }
        while(abs(f_c)>e);


        cout<<"\n\nroot:"<<z<<endl;
    }


    else
        cout<<"has no root";



    return 0;
}
