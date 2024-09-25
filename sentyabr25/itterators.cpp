#include <iostream>
#include <list>
#include <iterator>
#include <forward_list>
int main()
{
	/*std::list<int> l{10,15,20};
	auto iter=l.begin();
	std::cout<<*iter<<"\n";
	++iter;
	std::cout<<*iter<<"\n";
	--iter;
	std::cout<<*iter<<"\n";*/
	
	/*std::list<int> l{10,15,20};
	for(auto iter=l.begin();iter!=l.end();++iter)
	{
		std::cout<<*iter<<"\n";
	}
	for(auto iter=l.rbegin();iter!=l.rend();++iter)
	{
		std::cout<<*iter<<"\n";
	}*/
	
	/*std::list<int> l{0,10,15,20};
	auto iter=l.begin();
	++iter;
	l.insert(iter,5);
	for(auto it=l.begin();it!=l.end();++it)
	{
		if(*it%2==0)
		{
			it=l.erase(it);
		}
		

	}
	for(int x:l)
	{
		std::cout<<x<<"\n";
	}*/
	
	/*std::list<int> l{0,10,15,20};
	auto iter=std::next(l.begin());
	std::advance(iter,2);
	std::cout<<*iter<<" ";*/
	
	std:: forward_list<int> fl{3,42,5};
	fl.push_front(2);
	//fl.push_back(3); error
	auto iter=std::next(fl.begin());
	iter=fl.erase_after(iter);
	fl.insert_after(iter,4);
	for(int x:fl)
	{
		std::cout<<x<<"\n";
	}
	
}	
