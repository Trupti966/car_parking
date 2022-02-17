#include<iostream>

using namespace std;

int main()
{	
	int c=0;
	int r=0;
	int b=0;
	int u_input;
	int amount=0, count=0;
	
//****************** MENU  ********************************************
	while(true){
		
	cout<<"Press 1 for Rickshaw"<<"\n";
	cout<<"Press 2 for Car"<<"\n";
	cout<<"Press 3 for Bus"<<"\n";
	cout<<"Press 4 to show the record"<<"\n";
	cout<<"Press 5 to delete the record"<<"\n";
	cin>>u_input;
	
	if(u_input==1)
	{	
		if(count <=50)
		{
			amount=amount + 100;
			count++;
			r++;
		}
		else
		{
			cout<<"Parking is full....."<<endl;
		}
		
	}
	else if(u_input==2)
	{
		if(count <=50)
		{
			amount=amount + 200;
			count++;
			c++;
		}
		else
		{
			cout<<"Parking is full....."<<endl;
		}
	}
	else if(u_input==3)
	{
		if(count <=50)
		{
			amount=amount + 300;
			count++;
			b++;
		}
		else
		{
			cout<<"Parking is full....."<<endl;
		}
	}
	else if(u_input == 4)
	{
		cout<<"************************************************"<<endl;
		cout<<endl;
		cout<<"Total amount = "<<amount<<endl;
		cout<<"The total number of vehicles parked = "<<count<<endl;
		cout<<"Total numbers of rickshaw parked = "<<r<<endl;
		cout<<"Total numbers of car parked = "<<c<<endl;
		cout<<"Total numbers of bus parked = "<<b<<endl;
		cout<<endl;
		cout<<"************************************************"<<endl;
	}
	else if(u_input==5)
	{
		amount=0;
		count=0;
		r=0;
		c=0;
		b=0;
		cout<<"************************************************"<<endl;
		cout<<"RECORD DELETED........."<<endl;
		cout<<"************************************************"<<endl;
	}
	else
	{
		cout<<"Invalid Number"<<endl;
	}
	}
	
	
	return 0;
}
