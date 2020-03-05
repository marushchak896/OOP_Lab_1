#include "maksik.h"
#include <iostream>
using namespace std;

void Date:: get(){
    cout << day << "." <<  "0"<< month << "." << year<< endl;
}
void Date:: get1(){
    cout << day << " число " << month << " місяць " << year << " рік"<< endl;
}
Date::~Date (){
    cout << "destructor" << endl;
}
