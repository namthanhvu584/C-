#include "Person.cpp"
#include "EmployeeFT.cpp"
#include "EmployeePT.cpp"

int main(){
    vector<EmployeeFT> fulltimes(3);
    fulltimes[0] = EmployeeFT("A", 1, "HN", "123", "M", 10, 1000);
    fulltimes[1] = EmployeeFT("B", 2, "HN", "342", "K", 20, 1100);
    fulltimes[2] = EmployeeFT("C", 3, "NB", "223", "O", 15, 1000);
    for(auto &v : fulltimes){
        v.display();
    }
    for(auto &v : EmployeeFT::getMaxSalary(fulltimes)){
        v.display();
    }

    vector<EmployeePT> parttimes(3);
    parttimes[0] = EmployeePT("D", 1, "HN", "163", "M", 15, 2200);
    parttimes[1] = EmployeePT("E", 4, "HN", "392", "g", 20, 3300);
    parttimes[2] = EmployeePT("F", 3, "NB", "243", "O", 16, 3400);
    for(auto &v : parttimes){
        v.display();
    }
    for(auto &v : EmployeePT::getMaxSalary(parttimes)){
        v.display();
    }

    vector<Person *> persons({&fulltimes[0], &fulltimes[1], &parttimes[0]});
    for(auto &v : Person::findPerson(persons)) v->display();



}