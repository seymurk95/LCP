#include <iostream>
#include <string>
int main()
{
	/*std::string s1="Elementary,Waltson";
	std::string s2=s1;
	s1.clear();
	std::cout<<s1<<"\n";
	std::cout<<s2<<"\n";*/
	/*int x=42;
	int& ref=x;
	++x;
	std::cout<<ref<<"\n";*/
	/*std::string s1="Elementary";
	std::string& s2=s1;
	s1.clear();
	std::cout<<s2.size()<<"\n";*/
	
	
	//TAK DELAT NELSA!!!
/*	int x=42;
	int& ref; //ne skompiliruetsa
	ref=x; */
	/*int x=42
	int& ref=x;
	int y=20;
	int& ref=y;//v x budet hranitsa 20*/
	
	
	int x=42;
	int* ptr=&x;
	++x;
	std::cout<<*ptr<<"\n";
	
	
	
	
}
