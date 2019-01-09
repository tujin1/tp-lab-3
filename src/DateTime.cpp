#include "DateTime.h"
}
DateTime::DateTime(const DateTime & DateTime)
{
	cur = DateTime.cur;
}

DateTime::DateTime() 
{
	cur = time(0);
}
DateTime::DateTime( int day,  int month, int year) 
{
	cur = time(0);
	struct tm *  time;
	time = localtime(&cur); 
	time->tm_year = year - 1900;
	time->tm_mon = month - 1;
	time->tm_mday = day;
	cur = mktime(time);
}
string convert(time_t cur) 
{
	struct tm * time;
	char a[80];
	time = localtime(&cur);
	strftime(a, 80, "%d %B %Y, %A", time);
	return a;
}
string DateTime::getToday() 
{
	t = convert(cur);
	return t;
}
string DateTime::getYesterday()
{
	cur -= 86400;
	t = convert(cur);
	return t;
}

string DateTime::getTomorrow() 
{
	cur += 86400;
	t = convert(cur);
	return t;
}

string DateTime::getFuture( int n) 
{
	cur += 86400 * n;
	t = convert(cur);
	return t;
}

string DateTime::getPast(int n) 
{
	cur -= 86400 * n;
	t = convert(cur);
	return t;
}
int DateTime::getDifference(DateTime & DateTime) 
{
	int n = (abs(DateTime.cur - this->cur)) / 86400;
	return n;
}