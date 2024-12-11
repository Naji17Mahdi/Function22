#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int f ( int x , int y )
{
	return x + y;
}

main()
{
	int a  , b ;
	
	cout<<"Enter a , b :"<<endl;
	cin>>a>>b;
	
	cout<<"Sum = "<< f ( a , b );
}
