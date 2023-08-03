#include<iostream>
using namespace std;
int main(){
	char ans;
	int c,d;
	cout<<"What do u want \n";
	cin>>ans;
switch(ans){
	case '1':cout<<"name\n";
	cout<<"giv no for add\n";
	cin>>c>>d;
	cout<<"add is\n"<<c+d;
	break;
	case 'b':cout<<"age\n";
	cout<<"sub\n"<<c-d;
	cin>>c>>d;
	cout<<"sub is \n"<<c-d;
	break;
	default:cout<<"wrong choice";
}	
	return 0;
} 
