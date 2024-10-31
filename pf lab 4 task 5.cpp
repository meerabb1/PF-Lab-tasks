#include<iostream>
using namespace std;
int main()
{
	int choice, num1, num2, sum, diff;
	
	do 
	{
		cout<<"Which operation do you want to perform?";
		cout<<"1. Addition"<<endl;
		cout<<"2. Subtraction"<<endl;
		cout<<"3. Exit"<<endl;
		cin>>choice;
		switch (choice){
		case 1:
			cout<<"input two numbers: "<<endl;
			cin>>num1,
			cin>>num2;
			sum=num1+num2;
			cout<<"The sum of two numbers is: "<<sum;
		break;
		case 2:
			cout<<"input two numbers: "<<endl;
			cin>>num1;
			cin>>num2;
			diff=num1-num2;
			cout<<"The difference of two numbers is: "<<diff;
			break;
		case 3:
		cout<<"You have exited the program.";
	}
	}while (choice!=3);
	cout<<"You have exited the program.";
}

