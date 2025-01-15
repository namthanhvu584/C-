#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    float gpa;
};

void printStudents(const vector<Student>& students) {
    cout << "\nDanh sách sinh viên:\n";
    for (const auto& student : students) {
        cout << "Tên: " << student.name << ", Tuổi: " << student.age << ", GPA: " << student.gpa << endl;
    }
}

void findTopStudent(const vector<Student>& students) {
    float maxGpa = 0.0;
    string topStudent;
    for (const auto& student : students) {
        if (student.gpa > maxGpa) {
            maxGpa = student.gpa;
            topStudent = student.name;
        }
    }
    cout << "\nSinh viên có GPA cao nhất: " << topStudent << " (GPA: " << maxGpa << ")\n";
}

int main() {
    vector<Student> students;
    int n;
    cout << "Nhập số lượng sinh viên: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        Student student;
        cout << "\nNhập thông tin sinh viên thứ " << i + 1 << ":\n";
        cout << "Tên: ";
        cin.ignore();
        getline(cin, student.name);
        cout << "Tuổi: ";
        cin >> student.age;
        cout << "GPA: ";
        cin >> student.gpa;
        students.push_back(student);
    }

    printStudents(students);
    findTopStudent(students);

    return 0;
}
