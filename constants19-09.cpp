#include <iostream>
#include <vector>
int main()
{
	/*const int c1=42;
	int x;
	std::cin>>x;
	const int c2=2*x;
	//c2=0; //oshibka kompilyatsii
	cout<<c2<<" ";*/\
	
	/*const std::vector<int> v={1,3,5};
	std::cout<<v.size()<<"\n";
	//v.clear(); oshibka kompilyatsii
	//v[0]; tozhe oshibka*/
	
	/*int x=42;
	int ref=x;
	const int& cref=x;
	++x;
	++ref;
	//++cref; //oshibka
	int* ptr=&X;
	const int* cptr=&x;
	++*ptr;
	// ++*cptr; //oshibka
	int y = 20;
	cptr=&y;*/
	
	/*const int cx=42;
	//int& ref=cx; //oshibka
	const int& cref=cx;
	//int ptr=&cx; //oshibka
	const int* cptr=&cx;*/
	
	/*int x=42;
	const int cx=13;
	int* ptr=&x;
	//ptr=&cx; //oshibka
	const int* cptr=&x;
	cptr=&cx;
	int* const ptrc=&x;
	//ptrc=nullptr; //oshibka
	++*ptrc;
	const int* const cptc=&x;*/
	
	/*const size_t m=1000000;
	const size_t n=10000;
	std::vector<std::string> v(m);
	for(size_t i=0;i!=m;++i)
	{
		v[i].resize(n,'@');
	}
	size_t sum=0;
	for(auto row: v)
	{
		sum+=row.size();
	}
	std::cout<<sum<<"\n"; //NE ZAPUSKAY! BUDET OOOOCHEN DOLGO*/
	/*const size_t m=1000000;//uluchennaya versiya
	const size_t n=10000;
	std::vector<std::string> v(m);
	for(size_t i=0;i!=m;++i)
	{
		v[i].resize(n,'@');
	}
	size_t sum=0;
	for(const auto& row: v)//const dobavil
	{
		sum+=row.size();
	}
	std::cout<<sum<<"\n";*/
	
	
}
