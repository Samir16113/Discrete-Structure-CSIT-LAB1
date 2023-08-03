//Write a program that takes two or more sets as input and produces set
//operations like union, intersection, difference and symmetric difference as
//its output.
#include <iostream>
using namespace std;

int main(){

        int a[100],b[100],c[100];
        int n,m,i,j,flag;

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
        cout<<"Enter the no of 2md set";
        cin>>m;
        if(m>100){
            cout<<"Enter again";
        }
         for(i=0;i<m;i++){
            cout<<"Enter the value of 2nd set"<<i+1;
            cin>>b[i];
            cout<<endl;

        }
        cout<<"Intersection";
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if (a[i]==b[j]){
                    c[i]=a[i];
                     cout<<c[i]<<" ";
                }
            }
        }
        cout<<"Union";
        for(i=0;i<n;i++)
  {
     c[i]=a[i];
    cout<<c[i]<<" ";
  }
        c[i]=0;
        for(j=0;j<m;j++)
  {
    flag=0;
    for(i=0;i<n;i++)
    {
      if(a[i]==b[j])
      {
        flag=1;
        break;
      }
    }
    /* flag!=1 means element of array2 is not present in array1 */
    if(flag!=1)
    {
        c[i]=b[j];
      cout<<c[i]<<" ";
    }
    
  }
  cout<<"Difference";
      for (i = 0; i < n; i++) {  
        c[i] = a[i] -b[i];  
    }  
  
    
    for (i = 0; i < n; i++) {  
        cout<< c[i];  
    }  
     cout<<"Symetric Difference";
      for (int i = 0; i < n; i++) {
        c[i++] = a[i];
    }
    for (int i = 0; i < m; i++) {
        c[i++] = b[i];
    }
  for (int i = 0; i < n; i++) {
       
        for (int j = i + 1; j < n; j++) {
            if (c[i] == c[j]) {
                flag = 1;
                for (int k = j; k < n - 1; k++) {
                    c[k] = c[k + 1];
                }
                n--;
                j--;
            }
        }
        if (flag) {
            for (int k = i; k < n - 1; k++) {
                c[k] = c[k + 1];
            }
            n--;
            i--;
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout<<c[i];
    }
        return 0;
}

