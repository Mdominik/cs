#include "student.hpp"

Date::Date(){
    time = std::time(0);
    now = std::localtime(&time);
    m_year = now->tm_year+1900;
    m_month = now->tm_mon+1;
    m_day = now->tm_mday+1;
    m_hour = now->tm_hour+1;
    m_minute = now->tm_min+1;
    m_second = now->tm_sec+1;
}
Date::Date(int year, int month, int day, int hour, int minute, int second) :
    m_year{year}, m_month{month}, m_day{day}, m_hour{hour},m_minute{minute},
    m_second{second}{}

Date::~Date() {}

int Date::getYear() {
    return m_year;
}
int Date::getMonth() {
    return m_month;
}
int Date::getDay() {
    return m_day;
}
int Date::getHour() {
    return m_hour;
}
int Date::getMinute() {
    return m_minute;
}
int Date::getSeconds() {
    return m_second;
}

bool Date::isBefore(Date* date) {
    if(this->getYear() >= date->getYear())
        if(this->getMonth() >= date->getMonth())
            if(this->getDay() >= date->getDay())
                if(this->getHour() >= date->getHour())
                    if(this->getMinute() >= date->getMinute())
                        if(this->getSeconds() > date->getSeconds())
                            return false;
    return true;
}

std::string Date::getDate_DDMMYYYY() {
    std::stringstream date;
    if(Date::getSeconds() < 10) {
        date << Date::getDay() << "/" << Date::getMonth() << "/" << Date::getYear() << " " <<
        Date::getHour() << ":" << Date::getMinute() << ":0" << Date::getSeconds();
    } else {
        date << Date::getDay() << "/" << Date::getMonth() << "/" << Date::getYear() << " " <<
        Date::getHour() << ":" << Date::getMinute() << ":" << Date::getSeconds();
    }
    return date.str();
}

void Student::print() {
    std::cout << this->m_name << std::endl;
    std::cout << this->m_id << std::endl;
    std::cout << this->m_phone_no << std::endl;
    std::cout << this->m_age << std::endl;
    std::cout << this->m_standing << std::endl;
    std::cout << this->m_GPA << std::endl;
}

void CS1Cstudent::print() {
    std::cout << this->m_name << std::endl;
    std::cout << this->m_id << std::endl;
    std::cout << this->m_phone_no << std::endl;
    std::cout << this->m_age << std::endl;
    std::cout << this->m_standing << std::endl;
    std::cout << this->m_GPA << std::endl;
    std::cout << this->m_knowsPython << std::endl;
    std::cout << this->m_totalScore << std::endl;

}
