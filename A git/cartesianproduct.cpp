//Write a program that takes two or more sets as input and produces their
//Cartesian product as output.

	#include<iostream>
	using namespace std;
	
	int main(){

        int a[100],b[100];
        int n,m,i,j;

        cout<<"Enter the no of 1st set";
        cin>>n;
        if(n>100){
            cout<<"Enter again";
        }

        for(i=0;i<n;i++){
            cout<<"Enter the value of 1st set"<<i+1;
            cin>>a[i];
            cout<<endl;

        }
        cout<<"Enter the no of 2nd set";
        cin>>m;
        if(m>100){
            cout<<"Enter again";
        }
         for(j=0;j<m;j++){
            cout<<"Enter the value of 2nd set"<<j+1;
            cin>>b[j];
            cout<<endl;

        }
        cout<<"Cartesian Product";
        cout<<"{";
         for(i=0;i<n;i++){
         	for(j=0;j<m;j++){
         		cout<<"(";
         		cout<<a[i]<<b[j];
         		cout<<")";
         		cout<<",";
			 }
			 cout<<endl;
			 
    }
        cout<<"}";
        return 0;
    }

