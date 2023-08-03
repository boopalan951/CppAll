/* #include<iostream>
using namespace std;
int main(){
	struct students	{
	int id,ph,salary;
	std::string name,place;
};
students s1;
s1.id=1;
s1.ph=3435;
s1.salary=2342;
s1.name ="ram";
s1.place="avadi";y
cout<<"\n"<<s1.salary;
cout<<"\n"<<s1.ph;
cout<<"\n"<<s1.place;
cout<<"\n"<<s1.name;
students s2 ={2,4124,24144,"reye","w432"};
cout<<"\n"<<s2.salary;
cout<<"\n"<<s2.ph;
cout<<"\n"<<s2.place;
cout<<"\n"<<s2.name;
return 0;
} */

#include<iostream>
using namespace std;
int main(){
	struct s{
		int salary;
	//	std::string name "ram";
	};
	s s1;
	s1.salary=2000;
	s s2 = {2132};
	cout<<s1.salary<<"\t";
	cout<<s2.salary;
	return 0;
}
