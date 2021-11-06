//write program to solve the linear equation by using GAUSS ELIMINATON



#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

void d_matrix(float a[][6],int n)
{
      cout<<endl<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=n; j++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }
}


int main()
{
    int n;

    string x[5]= {"x0","x1","x2","x3","x4"};
    cout<<"No of equation : ";
    cin>>n;
    float a[5][6],temp,c,d[5]= {0}; //swap

    int i,j,k;
    cout<<"Enter coefficient of all : \n";
    for(i=0;i<n;i++)
    {
        cout<<"equation: "<<i+1<< "   ";
        for(j=0; j<=n; j++)
            cin>>a[i][j];
    }

    
    for(i=n-1;i>0;i--) 		//swap between to higher value to lower value
    {
        if(a[i-1][0]<a[i][0])	
            for(j=0; j<=n; j++)
            {
                temp=a[i][j];
                a[i][j]=a[i-1][j];
                a[i-1][j]=temp;
            }
    }

     d_matrix(a,n);			//show monitor augmented/change matrix


for(k=0;k<n-1;k++)			//making zeros

        for(i=k;i<n-1;i++)
        {
            c= (a[i+1][k]/a[k][k]) ;

            for(j=0;j<=n;j++)
                a[i+1][j]-=c*a[k][j];
        }

   

    d_matrix(a,n);		//monitor will how new matrix 


    for(i=n-1; i>=0; i--)		//find the value of variables
    {
        c=0;
        for(j=i; j<=n-1; j++)
            c=c+a[i][j]*d[j];

        d[i]=(a[i][n]-c)/a[i][i];
    }

    //result
    cout<<endl<<endl;
    for(i=0; i<n; i++)
        cout<<x[i]<<" = "<<d[i]<<endl;

	return 0;
}


