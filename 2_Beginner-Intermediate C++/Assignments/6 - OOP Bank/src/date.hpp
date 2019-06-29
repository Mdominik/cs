#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>
#include <vector>


class Date{
public:
    Date();
    Date(int year, int month, int day, int hour, int minute, int second);
    ~Date();
    std::string getDate_DDMMYYYY();
    int getYear();
    int getMonth();
    int getDay();
    int getHour();
    int getMinute();
    int getSeconds();
    bool isBefore(Date* date);
    int dayDifference(Date* date);
private:
    std::time_t time;
    std::tm* now;
    int m_year;
    int m_month;
    int m_day;
    int m_hour;
    int m_minute;
    int m_second;
};
