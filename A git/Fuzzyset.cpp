#include<iostream>
using namespace std;
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter the age of person ",i+1;
		cin>>a[i];
		
	}
	for(i=0;i<5;i++)
	{
		if(a[i]<=20){
		cout<<"Degree of Membership of person "<<i+1<<"is 1";
		cout<<endl;
	}
		else if(a[i]>20&&a[i]<=30){
		cout<<"Degree of Membership of person"<<i+1<<"is"<<(30.00-(float)a[i])/30.00;
		cout<<endl;
	}
		else{
		cout<<"Degree of Membership of person "<<i+1 <<"is 0";
	}
	}
	return 0;
}
