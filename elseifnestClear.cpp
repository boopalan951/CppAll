#include<iostream>
using namespace std;
int main(){
	int a,b,a1,a2;
	cout<<"enter your choise here\n";
	cin>>a>>a1>>a2>>b;
	if(a==1){
		cout<<"a satisfied\n";
		if(a1==11){
			cout<<"a1 satisfied\n";
			if(a2==12){
				cout<<"a2 satisfied\n";
				
			}
			else
			cout<<"a2 no satisfied";
		}
		else
		cout<<"a1 no satisfied";
	}
	else if(b==2)
	cout<<"b satisfied";
	else
	cout<<"Totally wrong choice";
return 0;
} 
