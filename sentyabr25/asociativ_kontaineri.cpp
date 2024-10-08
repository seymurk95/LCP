#include<iostream>
#include<map>
#include<string>
int main()
{
	/*std::map<std::string,int> years{
		{"Moscow",1147},
		{"Rome",-753},
		{"London",47}
	};
	for(const auto& [city,year]:years)
	{
		std::cout<<city<<":"<<year<<"\n";
	}*/
	
	std::map<std::string,int> data;
	std::string key;
	int value;
	while(std::cin>>key>>value)
	{
		data[key]=value;
	}
	data.erase("hello");
	if(auto iter=data.find("test");iter!=data.end())
	{
		std::cout<<"Found the key "<<iter->first<<"with the value"<<iter->second<<"\n";
		
	}
	else
	{
		std::cout<<"not found\n";
	}
	
	std::map<std::string,int> freqs;
	std::string word;
	while(std::cin>>word)
	{
		++freqs[word];
	}
	for(const auto& [word,freq]:freqs)
	{
		std::cout<<word<<"\t"<<freq<<"\n";
	}
	
	
	
	
	
	
	
}
