#include <iostream>
#include <stack>
#include <queue>
#include <functional>
#include <vector>
#include <string>
#include <string_view>
int main()
{
	/*std::stack<int> s; //под капотом он работает как дэк , но можно указать чтобы он работал с ними как с другим контейнером(std::stack<int,std::list<int>> s) (сам по себе он не является контейнером ,он является обёрткой для него)
	s.push(1); //условия чтобы сущесвовал стэк : pop_back(),push_back(),back(),empty()
	s.push(13);
	s.pop();
	std::cout<<s.top()<<"\n";
	if(s.empty())
	{
		std::cout<<"Stack is empty\n";
	}
	*/
	
	/*std::queue<int> s; //условия чтобы сущесвовал кью :pop_front(),front();
	s.push(1);
	s.push(13);
	std::cout<<s.front()<<"\n";
	std::cout<<s.back()<<"\n";
	s.pop();
	if(s.empty())
	{
		std::cout<<"queue is empty\n";
	}
	*/
	
	/*std::priority_queue<int,std::vector<int>,std::greater<int>> pq;
	for(int x:{3,14,15,92,6})
	{
		pq.push(x);
	}
	while(!pq.empty())
	{
		std::cout<<pq.top()<<"\n";
		pq.pop();
	}
	*/
	
	/*std::string s{"Hello world"};
	auto sub=s.substr(7);// берёт подстроку начиная с 7 и до конца
	sub[0]='w';
	std::cout<<sub<<"\n";
	std::cout<<s<<"\n";
	*/
	
	/*std::string s{"Hello, world! How do you do?"};
	std::string_view sv=s;
	sv.remove_prefix(7);
	sv.remove_suffix(16);
	std::cout<<sv<<"\n";
	std::cout<<s<<"\n";
	*/
	
	std::vector<std::string_view> lines;
	for(int i=0;i!=5;++i)
	{
		std::string line; //так делать нельзя! потому что память перезаписывается и может быть непредсказуемое поведение!
		std::getline(std::cin,line);
		lines.push_back(line);
	}
	for(auto iter: lines)
	{
		std::cout<<iter<<"\n";
	}
	
	
	
	
	
}
