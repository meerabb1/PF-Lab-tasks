#include<iostream>
using namespace std;
int main()
{
	string amal, mumtaz, performance;
	int choice;
	float GPA;
	cout<<"Welcome to the Scholarship menu"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"Option Scholarship Type Eligibility"<<endl;
	cout<<"-------------------------------"<<endl;
	cout<<"1 Performance Scholarship (GPA>=3.5)"<<endl;
	cout<<"2 Amal Scholarship (GPA>=3.1 and <3.5)"<<endl;
	cout<<"3 Mumtaz Scholarship (GPA>=3.3 and <3.5)"<<endl;
	cout<<"4 no Scholarship"<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"Enter your choice(1-4): "<<endl;
	cin>>choice;
	switch(choice){
	
	case 1:
		cout<<"Enter your GPA"<<endl;
		cin>>GPA;
		if(GPA>=3.5)
		{
		cout<<"Amal scholarship: This scholarship is awarded to students with a GPA of 3.1 or 3.2. It provides a scholarship of $20,000. Students who are hardworking and maintain a decenr GPA receive this scholarship to help with their eduction expenses.";
		}
		else
		{
			cout<<"You have less GPA.";
		}
	case 2: 
	cout<<"Enter your GPA"<<endl;
		cin>>GPA;
		if(GPA>=3.1 && GPA<3.5)
		{
	    cout<<"Mumtaz Scholarship: The 'mumtaz scholarship' is awarded to students with a GPA of 3.3 or 3.4. It provides a scholarship of $15,000. It's given to students who have demonstrated outstanding academic achievements and promise.";}
	    else {
	    	cout<<"you have less GPA.";
		}
	case 3:
		cout<<"Enter your GPA"<<endl;
		cin>>GPA;
		if(GPA>=3.3 && GPA<3.5)
		{
	    cout<<"Performance Scholarship: It is the most prestigious one. It's awarded to students with a GPA of 3.5 or higher. This scholarship provides $30.000 and is reserved for the top-performing students who excel academically."; }
	    else {
	    	cout<<"You have less GPA";
		}
}
}