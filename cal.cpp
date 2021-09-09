#include<iostream>
using namespace std;

double add(double a, double b)
{
	double c = a+b;
	return c;
}
double sub(double a, double b)
{
        double c = a-b;
        return c;
}

int main()
{
double x,y;
char op;
cout<<"Enter first number: ";
cin>>x;
cout<<"Enter which opertion you want to perform +,-,*,/";
cin>>op
cout<<"Enter second number: ";
cin>>y;
if(op='+')
{
 add(x,y);
}
else if(op='-')
{
 sub(x,y);
}
else
{
cout<<"This part of calculator is not handled well now, Sorry";
}

return 0;
}
