#include <iostream>
#include<string>
#include<vector>
/*int Max(int x,int y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}*/
template<typename T> //создаёт не существующий тип данных Т и дальше он подстраивается под нужный ему тип

T Max(const T& x,const T& y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
 template<typename T>
 const std::vector<T>&max(const std::vector<T>& v1,const std::vector<T>& v2) //перегрузка шаблона
{
	if(v1.size()>v2.size())
	{
		return v1;
	}
	else if(v1.size()<v2.size())
	{
		return v2;
	}
	else if(v1<v2)
	{
		return v1;
	}
	else
	{
		return v2;
	}
}

template<typename T1,typename T2,typename T3>
struct Triple
{
	T1 first;
	T2 second;
	T3 third;
};

int main()
{
	//std::cout<<Max(1,2)<<"\n";
	//std::cout<<Max(3.14159,2.71828)<<"\n";
//	std::cout<<Max<double>(3.14159,2)<<"\n"; //мы подсказываем каким поользоваться
//	std::string word1 {"hello"};
	//std::string word2 {"world"};
//	std::cout<<Max(word1,word2)<<"\n";
 //   std::vector<int> v1{1,2,3};
//	std::vector<int> v2{4,5};
//	for(const int& x: Max(v1,v2))
//	{
//		std::cout<<x<<" ";
//	}
//	std::cout<<"\n";
Triple<int,int,int> point{-1,3,2};
Triple<std::string,std::string,int> wordPairsfreq{"hello","world",42};
} 
