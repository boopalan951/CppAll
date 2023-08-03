#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	int n;
	srand(time(NULL));
	//int max=10,min=1
		 n=rand()%100;
	cout<<"\n"<<n;
	int s=10;
	do{
	//	s=s-1;
		s--;
		cout<<"\n"<<s;
	}while(s>=1)
	return 0;
}
