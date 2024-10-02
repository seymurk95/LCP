#include <algorithm>
#include <iostream>
#include <deque>
#include <vector>
#include <map>
#include <utility>
#include <string>
#include <list>
#include <deque>
#include <iterator>
int main()
{
	/*std::vector<int> data{100,42,17,80,20,0}; //сортирует так как мы сместили начало и конец первый и последний остаются на своём месте, а те что посередине сортируются
	std::sort(data.begin()+1,data.end()-1);
	for(int e:data)
	{
		std::cout<<e<<"\n";
	}*/
	
	
	/*std::vector<int> v{2,7,1,8,2,8}; //classic podhod
	int counter=0;
	for(int elem:v)
	{
		if(elem==8)
		{
			counter++;
		}
	}
	std::cout<<counter<<"\n";*/
	
	/*std::vector<int> data{2,7,1,8,2,8}; //bistree
	std::cout<<std::count(data.begin(),data.end(),8)<<"\n";*/ 
	
	/*std::deque<int> d{3,14,15,92,6};
	auto iter1=std::find(d.begin(),d.end(),15);
	std::cout<<(iter1-d.begin())<<"\n"; //выводит расстояние между позициями 15 и 3
	auto start=d.begin();
	auto end=start+3;
	auto iter2=std::find(start,end,19);
	if(iter2==end)
	{
		std::cout<<"No such element\n";		
	}
	else
	{
		std::cout<<*iter2<<"\n";
	}*/
	
	/*std::map<int,int> m{
		{1,30},
		{2,28},
		{3,38}		
		
		};
	auto it1=m.find(12);
	//auto it2=std::find(m.begin(),m.end(),12); //это приведёт к ошибке
	std::pair<const int,int> value{12,31};
    auto it3=std::find(m.begin(),m.end(),value);*/
	
	
	/*std::string s="iPhone SE";
	std::cout<<std::count_if(
	s.begin(),
	s.end(),
	[](char c){return 'A'<=c&& //количество заглавных букв
		c<='Z';}
	
	
	)<<"\n";*/
	
	/*std:: string s="No lemon,no melon!";
	std::reverse(s.begin(),s.end()); //выводит наоборот
	std::cout<<s<<"\n";*/
	
	/*std::vector<int> v{5,5,3,2,2,5,9,1};
	auto iter=std::unique(v.begin(),v.end());//не меняет длину вектора
	for(int e:v)
	{
		std::cout<<e<<"\n";//выводит просто вектор
	}
	v.erase(iter,v.end()); //убирает повтярюшки
	for(int e:v)
	{
		std::cout<<e<<" ";//убрав дубликаты так как длина вектора не меняется в конце будет выводить какойто мусор
	}*/
	
	/*std:: vector <int> v{3,14,15,92,6};
	std::list<int> l;
	l.resize(v.size());
	std::copy(v.rbegin(),v.rend(),l.begin());//перезаписываем из одного хранилища в другое в обратном направлении
	for(int e:l)
	{
		std::cout<<e<<" "; 
	}*/
	
	/*std:: vector <int> v{3,14,15,92,6};
	std::list<int> l(10);
	auto iter = std::copy(v.rbegin(),v.rend(),l.begin());
	for(int e:l)
	{
		std::cout<<e<<"\n"; //так как места больше чем элементов будет выводить 0, но после уберёт повторяющиеся нули
	}
	l.erase(iter,l.end());
	for(int e:l)
	{
		std::cout<<e<<" "; 
	}*/
	
	/*std::vector<int> v{3,14,15,92,6};
	std::list<int> l;
	std::copy(v.begin(),v.end(),std::back_inserter(l));//имитирует итератор но им не является (имитирует пушбэк)
	for(int e:l)
	{
		std::cout<<e<<" "; 
	}*/
	
	/*std::list<int> data{3,14,15,92,6};
	//std::sort(data.begin(),data.end()); //выдаст ошибку потому в списке операция++ не определена(это одно из условий библиотеки алкоритм)
	data.sort();
	for(int e:data)
	{
		std::cout<<e<<" "; 
	}*/
	
	/*std::vector<int> data{3,14,15,92,6};
	std::partial_sort(data.begin(),data.begin()+3,data.end());//сортирует первый до третьего а оставшиеся просто выводит(сортирует частично)
	for(int e:data)
	{
		std::cout<<e<<" "; 
	}
	*/
	
	/*std::vector<int> data{1,4,5,9,9,13,47};
	if(std::binary_search(data.begin(),data.end(),5))//если знаем что там отсортировано то пользуемся бинарным поиском потому что меньше сложность 
	{
		std::cout<<"Found\n";
	}
	else
	{
		std::cout<<"Not found\n";
	}
	*/
	
	/*std::vector<int> data{1,4,5,9,9,13,47};
	auto iter1=std::lower_bound(data.begin(),data.end(),8); //показывает итератор неменьше заданого (больше 8 это 9)
	auto iter2=std::upper_bound(data.begin(),data.end(),47);//показывает итератор больше(показывает на конец)
	std::cout<<*iter1<<"\n"; 
	for(auto iter=iter1;iter!=iter2;++iter)
	{
		std::cout<<*iter<<" "; 
	}
	
	std::cout<<"\n"; 
	*/
	
	std::vector<int> in1{1,3,5,5,7};
	std::list<int> in2{1,1,2,3};
	std::deque<int> out;
	std::merge(
	in1.begin(),in1.end(),in2.begin(),in2.end(),std::back_inserter(out));
	 for(int e:out)
	{
		std::cout<<e<<"\n"; 
	}
	out.clear();
	std::set_union(
	in1.begin(),in1.end(),in2.begin(),in2.end(),std::back_inserter(out));
	for(int e:out)
	{
		std::cout<<e<<" "; 
	}
	out.clear();
	std::set_intersection(
	in1.begin(),in1.end(),in2.begin(),in2.end(),std::back_inserter(out));
	for(int e:out)
	{
		std::cout<<e<<"\n"; 
	}
	out.clear();
	std::set_difference(
	in1.begin(),in1.end(),in2.begin(),in2.end(),std::back_inserter(out));
	for(int e:out)
	{
		std::cout<<e<<" "; 
	}
	out.clear();
	std::set_symmetric_difference(
	in1.begin(),in1.end(),in2.begin(),in2.end(),std::back_inserter(out));
	for(int e:out)
	{
		std::cout<<e<<"\n"; 
	}
	out.clear();
	
	
	
	
	
	
	
}
