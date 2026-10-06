#include<iostream>
#include<math.h>
using namespace std;

int bisection(int x){
	return pow(x,2)+4*x-10;
}
int main()
{
	int x1;
	int x2;
	int e;
	cout<<"Enter the value of x1,x2,e";
	cin>>x1,x2,e;
	cout<<"The value of f1:",bisection(x1);
	cout<<"The value of f2:",bisection(x2);
	
	
}