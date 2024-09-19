#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

/*void Swap(int& x,int& y) //dla pervoy i vtoroy
{
	int z=x;
	x=y;
	y=z;
}*/

/*std::string Concatenate(const std::vector<std:: string>&parts) //dla tretey
{
	std::string result;
	for(const auto& part:parts)
	{
		result+=part;
	}
	return result;
}*/

struct Date //dla chetvertoy i pyatoy
{
	int year=1970;
	int month=1;
	int day=1;
};

/*bool operator<(const Date& lhs,const Date& rhs) //dla pyatoy  //perviy variant
{
	if(lhs.year!=rhs.year)
	{
		return lhs.year<rhs.year;
	}
	if(lhs.month!=rhs.month)
	{
		return lhs.month<rhs.month;
	}
	return lhs.day<rhs.day;
};*/

bool operator<(const Date& lhs,const Date& rhs) //dla pyatoy  vtoroy variant //OBRATI VNIMANIE ON NAZIVAETSA PEREGRUZHENIM OPERATOROM SRAVNENIYA POTOMU STO EST ZNAK <
{
	return std::tie(lhs.year,lhs.month,lhs.day)<std::tie(rhs.year,rhs.month,rhs.day);
};

int main()
{
	/*int a=1;
	int b=2;
	Swap(a,b);
	std::cout<<a<<" "<<b<<"\n";*/
	
	/*std::string line;
	std::getline(std::cin,line); //beret po ssilke sam(vstroenniy &)*/
	
	/*std:: vector<std::string> parts={"ab","ra","ca","da","bra"};
	std::cout<<Concatenate(parts)<<"\n";*/
	
	std::vector<Date> dates={
		{2020,3,15},
		{2019,1,21},
		{2021,1,30}
		};
		std::sort(dates.begin(),dates.end(),[](const Date& lhs,const Date& rhs) 

	{return std::tie(lhs.year,lhs.month,lhs.day)<std::tie(rhs.year,rhs.month,rhs.day);});
		
		for(const auto& [year,month,day]:dates)
		{
			std::cout<<year<<"."<<month<<"."<<day<<"\n";
		}
	
	
	
	
	
}
