#include<iostream>
#include"a.h"
using namespace std;
int main(){
	char ans;
	int a,b;
//	int e = c=d;
	cout<<"What do u want \n";
	cin>>ans;
switch(ans){
	case 'c':cout<<"name\n";
	cout<<"giv no for add \n";
//	cout<<c+d;
	cin>>a>>b;
	cout<<"add is\n"<<a+b;
	break;
/*	case 'd':cout<<"age\n";
	cout<<"sub\n"<<a-b;
	cin>>a>>b;
	cout<<"sub is \n"<<a-b;
	break;*/ 
	default:cout<<"wrong choice";
}	
	return 0;
} 
