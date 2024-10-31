#include<iostream>
using namespace std;
int main()
{
	int number, factorial=1;
	cout<<"Enter a positive integer: ";
	cin>>number;
	if(number<0)
	{
		cout<<"Factorial is not defined for negative numbers.";
	}
	else
	{
		int i=1;
		while (i<=number)
		{
			factorial*=i;
			i++;
		}
		cout<<"Factorial of "<<number<<" is "<<factorial<<endl;
	}
	return 0;
}