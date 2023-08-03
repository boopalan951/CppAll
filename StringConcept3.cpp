#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char b;
	cout<<"Enter the number whether it is numbwer";
	cin>>b;
	int a =1234567890;
	int rev=0,first=0,last=0;
	while(a!=0){
	
		last=a%10;
		rev =rev*10+last;
		a=a/10;
	//	cout<<rev;
}
cout<<"\n"<<rev;
//cout<<char(isdigit(b));
	
	return 0;
}
