#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a;
	cout<<"Enter the value whether it is number\n";
	cin>>a;
	cout<<char(isdigit(a));
	return 0;
}
