#pragma once
#include "Person.cpp"

class EmployeePT : public Person {
    private:
        int hour;
        long money;
    public:
        EmployeePT(){}
        EmployeePT(string name, int age, string add, string tel, string sex, int hour, long money) : Person(name, age, add, tel, sex){
            this->hour = hour;
            this->money = money;
        }
        int getHour(){
            return hour;
        }

        long getMoney(){
            return money;
        }

        long salary(){
            return long(hour) * money;
        }
        void display(){
            cout << "Emloyee Part Time" << endl;
            Person::display();
            cout << "Hour: " << hour << endl;
            cout << "Money: " << money << endl;
            cout << "Salary: " << salary() << endl;
        }

        static vector<EmployeePT> getMaxSalary(vector<EmployeePT> pt){
            long max = pt[0].salary();
            for(int i = 0; i < pt.size(); i++){
                if(pt[i].salary() > max){
                    max = pt[i].salary();
                }
            }
            vector<EmployeePT> v;
            for(int i = 0; i < pt.size(); i++){
                if(max == pt[i].salary()) v.push_back(pt[i]);
            }
            return v;
        }
};