#include <string>
#include <time.h>
#include <iostream>
using namespace std;

class DateTime {

private:

	time_t cur;
    string t;
public:
    DateTime(const DateTime&); 
	DateTime();
	DateTime(int, int, int);
	string getToday();
	string getYesterday();
	string getTomorrow();
	string getFuture( int);
	string getPast(int);
	int getDifference(DateTime &);

};