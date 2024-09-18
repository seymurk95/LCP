#include<string>
#include<utility>
#include<iostream>
int main()
{
	std::pair<std::string,int> p={"Hello",42};
	auto[word,freq]=p;
	//sam opredelyayet tip dannix
	std::cout<<word<<" "<<freq<<"\n";
}
