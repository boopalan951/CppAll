#include<iostream>
using namespace std;
int main(){
//	int a=1,b=5,c=4;
	int a,b,c,d,e,f;
	cout<<"entert the choice \n";
	cin>>a>>b>>c>>d>>e>>f;
	if(a==1){
		cout<<"a satisfied";
		if(b==2){
			cout<<"b satisfied\n ";
			if(c==3){
			cout<<"c satisfied\n";
			if(d==4)
			cout<<"d satisfied\n";
			if(e==5)
			cout<<"e satisfied\n";
			else
			cout<<"d no \n";
			}
			else
			cout<<" c no";
		}
		else
		cout<<"wrong ";
	}
	else if(f==6)
	cout<<"c true";
	else
	cout<<"wrong no";
	return 0;
	
}
