#ifndef MANAGEMENTSYSTEM_H
#define MANAGEMENTSYSTEM_H

#include "user.h"
#include "member.h"
#include "item.h"
#include "sale.h"
#include <QFile>
#include <QDebug>
#include <QVector>
#include <functional>
#include <string>

const std::string credentials_file =  "../login.txt";
const std::string days_files[7] = {"resources/day1.txt", "resources/day2.txt", "resources/day3.txt"
                                  "resources/day4.txt","resources/day5.txt", "resources/day6.txt",
                                  "resources/day7.txt"};
const std::string members_file = "resources/warehouse shoppers.txt";
const std::string tmp_file = "resources/tmp.txt";

const int lines_members = 4;
const int lines_sales = 4;

enum CurrentlyLogged {
    noOne, admin, manager
};

class ManagementSystem
{
public:
    ManagementSystem();
    void initializeUsers();
    bool retrieveCredentials();
    User getAdmin() const {return admin;}
    User getManager() const {return manager;}
    QVector<QVector<Sale>> getSales() const {return m_allSales;}
    QVector<Member> getMembers() const {return m_members;}
    CurrentlyLogged getCurrentlyLogged() const { return logged;}
    void setCurrentlyLogged(CurrentlyLogged log) {logged=log;}
    void setMembers(QVector<Member>& mem) {m_members=mem;}
    bool populateMembersData(QFile& file);
    bool populateDaySales(QFile* file);
    void sortPurchasesByNumber();
    Member* findMember(int id);
    void sortMembers(bool is_byID);
    QVector<int> getExecutiveMembers() const {return m_executiveMembers;}
    QVector<int> getRegularMembers() const {return m_regularMembers;}
    QVector<Sale> getAllSalesOneVec() const {return m_allSalesOneVec;}
    QVector<Item*> getAllItems() const { return m_allItems;}
    void addMemberToFile(Member& m);
    void deleteMemberFromFile(QString& member_name);
private:
    User admin;
    User manager;
    QVector<Member> m_members;
    CurrentlyLogged logged;//0=no one, 1=admin, 2=manager
    QVector<QVector<Sale>> m_allSales;
    QVector<Sale> m_allSalesOneVec;
    QFile* m_salesFiles[7];
    QVector<int> m_executiveMembers;
    QVector<int> m_regularMembers;
    QVector<Item*> m_allItems;
    QVector<QString> m_allItemsNames;
};



#endif // MANAGEMENTSYSTEM_H
