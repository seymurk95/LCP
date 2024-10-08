#include <iostream>
#include "time.h"
bool IsAfternoonTime(const chron::Time& time)
{
	return time.GetHours()>=12;
}
int main()
{
	chron::Time t(1300,-30,0);
	std::cout<<t.GetHours()<<"\n";
	std::cout<<t.GetMinutes()<<"\n";
	std::cout<<t.GetSeconds()<<"\n";
	
	/*if(IsAfternoonTime(t))
	{
		std::cout<<t.GetHours()-12<<"PM\n";
	}*/
	
}
