#include<iostream>
using namespace std;
int main()
{
	int a[10];
	for(int i=0;i<10;i++)
	{cout<<"enter the value of integers"<<endl;
	cin>>a[i];
	
	}
	int t;
	cout<<"enter another integer"<<endl;
	cin>>t;
	int flag=0;
	for(int i=0;i<10;i++)
	{
	
	if(t==a[i])
    {
		flag=1;}
	}
	if(flag==1)
	cout<<"found";
	else
	cout<<"not found";
    
	return 0;
} 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

