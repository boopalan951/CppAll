#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter the value";
	cin>>a;
	int b=21;
	int *p;
	p=&a;
	cout<<"\n"<<p;
	p=&b;
	cout<<"\n"<<p;
	return 0;
}
