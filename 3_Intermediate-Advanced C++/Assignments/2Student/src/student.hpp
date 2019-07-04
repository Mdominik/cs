#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <algorithm>
#include <sstream>
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


class Student {
public:
    Student(){}
    explicit Student(std::string _name, int _id, std::string _phone, int _age, std::string _standing,
    float gpa) : m_name{_name} , m_id{_id}, m_phone_no{_phone}, m_age{_age}, m_standing{_standing} ,m_GPA{gpa}{}

    void setName(char* name){
        m_name = name;
    }
    void setID(int id) {m_id = id;}
    void setPhone(char* phone) {m_phone_no = phone;}
    void setAge(int& age) {m_age = age;}
    void setStanding(char* standing) {m_standing = standing;}
    void setGPA(float& GPA) {m_GPA = GPA;}

    std::string getName() const { return m_name;}
    int getID() const { return m_id;}
    std::string getPhone() const { return m_phone_no;}
    int getAge() const { return m_age;}
    std::string getStanding() const { return m_standing;}
    float getGPA() const { return m_GPA;}
    virtual void print();

        std::string m_name;
        int m_id;
        std::string m_phone_no;
        int m_age;
        std::string m_standing;
        float m_GPA;
};

class CS1Cstudent : public Student {
public:
    CS1Cstudent(std::string _name, int _id, std::string _phone, int _age, std::string _standing, float gpa)
    : Student(_name, _id, _phone, _age, _standing, gpa) {}
    bool m_knowsPython;
    float m_totalScore;
    Date graduation;
    void print();

    bool operator==(const Student& st) {
        return this->m_GPA == st.m_GPA;
    }

    void operator++() {
        this->m_age = this->m_age+1;
    }


};


// std::ostream& operator<<(std::ostream &os, const Student &st) {
//     os << "Name: " << st.m_name;
//     os << "ID: " << st.m_id;
// }
//
// std::ostream& operator>>(std::ostream &os, const Student &st) {
//     os >> "Name: " << st.m_name;
//     os >> "ID: " << st.m_id;
// }

class SoftwareTester : public Student {
public:
    std::string address;
    std::string city;
    std::string state;
    int zipCode;
};
