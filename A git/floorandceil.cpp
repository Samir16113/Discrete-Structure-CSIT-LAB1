//Write a program that takes a real number and produces is ceiling and floor
//integers as output.

	#include<iostream>
	using namespace std;
	
	int main(){
	double a;
	
		cout<<"Enter value of a";
		cin>>a;
	int ceil=(int)a;
		if(a<0){
			ceil=ceil-1;
			cout<<"The Ceiling Value is";
			cout<<(int)ceil;
		}
		else if(a>(int)a){
			
		cout<<"The Ceiling Value is"<<ceil+1<<endl;
	}
	else{
		cout<<"The Ceiling Value is"<<ceil;
	}
		int floor=(int)a;
		cout<<"The floorValue is"<<(int)floor<<endl;
		return 0;
	}
