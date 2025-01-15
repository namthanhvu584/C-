#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee{
    private:
        string name;
        double salary;
    
    public:
        void setName(const string& n){
            name = n;
        }
        void setSalary(const double& s){
            salary = s;
        }
        string getName() const{
            return name;
        }
        double getSalary() const{
            return salary;
        }
};

int main(){
    vector<Employee> employees;
    string name;
    double salary;

    while(true) {
        cout << "Nhap ten nhan vien: " ;
        cin >> name;
        if(name == "-1") break;

        cout << "Nhap luong: ";
        cin >> salary;
        if(salary == -1) break;

        Employee emp;
        emp.setName(name);
        emp.setSalary(salary);
        employees.push_back(emp);
    }

    if(!employees.empty()){
        Employee highestSalaryEmployee = employees[0];
        for (const auto &emp : employees){
            if (emp.getSalary() > highestSalaryEmployee.getSalary()){
                highestSalaryEmployee = emp;
            }
        }
        cout << "\nNhan vien co muc luong cao nhat la: " << endl;
        cout << "Ten: " << highestSalaryEmployee.getName() << endl;
        cout << "Luong: " << highestSalaryEmployee.getSalary() << endl;
    }else{
        cout <<"Danh sach trong!" << endl;
    }
    return 0;
}

