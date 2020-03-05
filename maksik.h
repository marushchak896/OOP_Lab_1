#pragma once
#include<iostream>
using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date (){
        day = 18;
        month = 7;
        year = 2019;
        get();
        get1();
    }
    void set (int d, int m, int y){
    day = d;
    month= m;
    year = y;
        
    }
 
    void get();
    void get1 ();
    

    ~Date ();
};
