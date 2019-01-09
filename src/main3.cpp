#include "DateTime.h"
#include <iostream>
using namespace std;
int main(){
DateTime day(7, 10, 1999);
	cout << "Today " << day.getToday() << endl;
	cout << "Tomorrow " << day.getTomorrow() << endl;
	cout << "Yesterday " << day.getYesterday() << endl;
	cout << "Future " << day.getFuture(10) << endl;
	cout << "Past " << day.getPast(32) << endl;
	return 0;
}