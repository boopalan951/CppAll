#include<iostream>


int d(){
	int a,b;
	std::cout<<"\n"<<"giv two no"<<a+b;
	std::cin>>a>>b;
	std::cout<<"\n"<<"add is"<<a+b;
	
}
int d1(int c,int d){
	std::cout<<c+d<<"\n";
//	std::cout<<"\n"<<"enter the no"<<c+d;
//	std::cin>>c>>d;
	std::cout<<"\n"<<"add is "<<c+d;
}
int main(){
	d1(43,2);
	return 0;
}
