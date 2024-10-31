#include<iostream>
using namespace std;
int main()
{
	int number=9;
	cout<<"Table of 9:"<<endl;
	for(int i=1; i<=10; i++)
	{
		cout<<number<<"x"<<i<<"="<<number*i<<endl;
	}
	return 0;
}