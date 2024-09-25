#include <array>
#include <deque>
#include <iostream>
#include <list>
int main()
{
	/*std::array<int,3> point{1,2,-3};*/
	
	/*std::deque<int> d{1,2,3,4};
	d.push_back(5);
	d.push_back(6);
	d.pop_back();
	d.push_front(0);//можно добавлять элементы в начало
	d.push_front(-1);
	d.pop_front();//и удалять в первые
	for(size_t i=0;i!=d.size();++i)
	{
		std::cout<<d[i]<<"\n";
	}
	for(int x:d)
	{
		std::cout<<x<<"\n";
	}*/
	
	std::list<int> l{10,15,20};
	l.push_back(5);
	l.push_front(0);
	l.push_back(25);
	l.push_back(30);
	l.pop_back();
	l.pop_front();
	for(int x:l)
	{
		std::cout<<x<<"\n";
	}
}
