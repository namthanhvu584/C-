
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<People> people(4);
    people[0] = People("A", 1, "1", "1");
    people[1] = People("B", 2, "2", "1");
    people[2] = People("C", 3, "3", "1");
    people[3] = People("D", 4, "", "1");
    cout << "People:" << endl;
    for (auto &v : people)
        v.display();
    vector<Family> families(2);
    families[0] = Family("HN", "poor", {people[0], people[1]});
    families[1] = Family("SG", "poor", {people[2], people[3]});


    cout << "Poor families:" << endl;
    for (auto &v : Family::getPoorHousehold(families))
        cout << v.getNameF() << endl;

    cout << "Family SurName:" << endl;
    for (auto &v : Family::findFamilySurename(families, "A"))
        v.display();

    cout << "Name group" << endl;
    Group groups("1", families);
    groups.display();


    cout << "Number of families: " << groups.getNumberFamily() << endl;
    cout << "Ave age of group: " << groups.avgAgeGroup(groups) << endl;
    cout << "Unemployment" << endl;
    for (auto &v : Group::getPeopleHaveNotJob(groups))
        v.display();
}
