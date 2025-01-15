//tim ki tu khong giong nhau
// #include <iostream>
// #include <string>
// using namespace std;

// void findAndPrintUncommonChars(string str1, string str2) {
//     string uncommonChars = "";

//     // Duyệt qua từng ký tự trong str1
//     for (char c : str1) {
//         if (str2.find(c) == string::npos) { // Nếu ký tự không có trong str2
//             if (uncommonChars.find(c) == string::npos) { // Tránh trùng lặp
//                 uncommonChars += c;
//             }
//         }
//     }

//     // Duyệt qua từng ký tự trong str2
//     for (char c : str2) {
//         if (str1.find(c) == string::npos) { // Nếu ký tự không có trong str1
//             if (uncommonChars.find(c) == string::npos) { // Tránh trùng lặp
//                 uncommonChars += c;
//             }
//         }
//     }

//     // In kết quả
//     cout << "Các ký tự không chung là: " << uncommonChars << endl;
// }

// Hàm main để kiểm tra
// int main() {
//     string str1 = "abcdxyz";
//     string str2 = "xyz123";
//     findAndPrintUncommonChars(str1, str2);
//     return 0;
// }
//thoi gian cuoc hop
#include <iostream>
#include <string>
using namespace std;

// struct Interval
// {
//     int s, e;
// };
 
// bool mycomp(Interval a, Interval b)
// { return a.s < b.s; }
 
// void mergeIntervals(Interval arr[], int n)
// {
//     sort(arr, arr+n, mycomp);
 
//     int index = 0; 
//     for (int i=1; i<n; i++)
//     {
//         if (arr[index].e >=  arr[i].s)
//         {
//             arr[index].e = max(arr[index].e, arr[i].e);
//         }
//         else {
//             index++;
//             arr[index] = arr[i];
//         }   
//     }
// cout << "\n The Merged Intervals are: ";
//     for (int i = 0; i <= index; i++)
//         cout << "[" << arr[i].s << ", " << arr[i].e << "] ";
// }
 
// int main()
// {
//     Interval arr[] = { {6,8}, {1,9}, {2,4}, {4,7} };
//     int n = sizeof(arr)/sizeof(arr[0]);
//     mergeIntervals(arr, n);
//     return 0;
// }

// ung cu vien

// void winner(vector<string>& votes) {
//     // Sử dụng map để lưu số phiếu bầu (tự động sắp xếp theo thứ tự từ điển)
//     map<string, int> voteCount;

//     // Đếm số phiếu bầu cho từng ứng cử viên
//     for (const string& name : votes) {
//         voteCount[name]++;
//     }

//     // Biến để lưu ứng viên thắng cuộc
//     string winningCandidate = "";
//     int maxVotes = 0;

//     // Tìm ứng viên với số phiếu bầu cao nhất
//     for (const auto& entry : voteCount) {
//         const string& candidate = entry.first;
//         int count = entry.second;

//         // Nếu tìm thấy số phiếu lớn hơn, cập nhật
//         // (Khi dùng map, tên ứng viên đã được sắp xếp từ điển)
//         if (count > maxVotes) {
//             winningCandidate = candidate;
//             maxVotes = count;
//         }
//     }

//     // In kết quả
//     cout << winningCandidate << " " << maxVotes << endl;
// }

// // Hàm main để kiểm tra
// int main() {
//     vector<string> votes = {"john", "jackie", "johnny", "john", "jackie", "jamie", 
//                             "jamie", "john", "johnny", "jamie", "johnny", "john"};
//     winner(votes);
//     return 0;
// }
//  keo bua bao
// void getWinner(string a, string b){
//    if (a.size() != b.size()){
//        cout << "Error\n";
//        return;
//    }
//    int n = a.size();
//    int scoreA = 0;
//    for (int i = 0; i < n; ++i){
//        if (a[i]!='B' || a[i]!='K' || a[i]!='G' ||
//                b[i]!='B' || b[i]!='K' || b[i]!='G'){
//            cout << "Error\n";
//            return;
//        }
//        if (a[i]=='B' && b[i]=='K')
//            scoreA++;
//        else if (a[i]=='B' && b[i]=='G')
//            scoreA--;
//        else if (a[i]=='K' && b[i]=='G')
//            scoreA++;
//        else if (a[i]=='K' && b[i]=='B')
//            scoreA--;
//        else if (a[i]=='G' && b[i]=='B')
//            scoreA++;
//        else if (a[i]=='G' && b[i]=='K')
//            scoreA--;
//    }		
//    if (scoreA > 0)
//        cout << "A\n";
//    else if (scoreA == 0)
//        cout << "Hoa\n";
//    else
// cout << "B\n";

// }

// int main() {
//    string a = "BGK";
//    string b = "GBB";
//    getWinner(a, b);
//    return 0;
// }


//ki tu 1
// void processString(string S) {
//     string result = "";

//     // Duyệt qua từng ký tự trong chuỗi
//     for (char c : S) {
//         if (isalpha(c)) {
//             // Nếu là chữ cái, chuyển thành chữ thường và thêm vào kết quả
//             result += tolower(c);
//         } else if (c == ' ') {
//             // Nếu là khoảng trắng, thêm vào kết quả
//             result += c;
//         }
//     }

//     // Xóa khoảng trắng thừa ở đầu và cuối chuỗi
//     while (!result.empty() && result.front() == ' ') result.erase(result.begin());
//     while (!result.empty() && result.back() == ' ') result.pop_back();

//     // In kết quả
//     cout << result << endl;
// }

// // Hàm main để kiểm tra
// int main() {
//     string S = "What IS your NaMe??? My name is &*what.";
//     processString(S);
//     return 0;
// }

//ki tu 2

// void canTransform(string A, string B) {
//     int n = A.length();
//     int m = B.length();
//     vector<int> toRemove; // Lưu chỉ số các ký tự cần xóa

//     int i = 0, j = 0;

//     // Duyệt qua chuỗi A và B
//     while (i < n) {
//         if (j < m && A[i] == B[j]) {
//             // Nếu ký tự trong A và B khớp, chuyển sang ký tự tiếp theo trong B
//             j++;
//         } else {
//             // Nếu không khớp, ghi lại chỉ số ký tự cần xóa
//             toRemove.push_back(i);
//         }
//         i++;
//     }

//     // Kiểm tra xem đã khớp toàn bộ chuỗi B hay chưa
//     if (j == m) {
//         cout << "1" << endl; // Có thể biến đổi
//         for (int idx : toRemove) {
//             cout << idx << " ";
//         }
//         cout << endl;
//     } else {
//         cout << "0" << endl; // Không thể biến đổi
//     }
// }

// // Hàm main để kiểm tra
// int main() {
//     string A = "abcef14&f";
//     string B = "b1&";
//     canTransform(A, B);
//     return 0;
// }

//dia chi IP
// #include <iostream>
// #include <string>
// #include <sstream>
// #include <vector>
// using namespace std;

// // Hàm kiểm tra một địa chỉ IPv4 có hợp lệ hay không
// int isValid(string ip) {
//     vector<string> parts; // Lưu trữ các phần sau khi tách địa chỉ IP
//     stringstream ss(ip);
//     string segment;

//     // Tách địa chỉ IP thành các phần (dựa trên dấu '.')
//     while (getline(ss, segment, '.')) {
//         parts.push_back(segment);
//     }

//     // Kiểm tra nếu không đủ hoặc quá nhiều phần
//     if (parts.size() != 4) {
//         return 0;
//     }

//     // Kiểm tra từng phần
//     for (string part : parts) {
//         // Kiểm tra nếu phần trống
//         if (part.empty()) {
//             return 0;
//         }

//         // Kiểm tra nếu phần chứa ký tự không phải số
//         for (char c : part) {
//             if (!isdigit(c)) {
//                 return 0;
//             }
//         }

//         // Chuyển phần sang số nguyên
//         int num = stoi(part);

//         // Kiểm tra nếu không thuộc khoảng [0, 255]
//         if (num < 0 || num > 255) {
//             return 0;
//         }

//         // Kiểm tra nếu có số 0 đứng đầu (trừ số "0" duy nhất)
//         if (part[0] == '0' && part.size() > 1) {
//             return 0;
//         }
//     }

//     // Nếu tất cả các phần đều hợp lệ
//     return 1;
// }

// int main() {
//     string ip;
//     cout << "Nhập địa chỉ IPv4: ";
//     cin >> ip;

//     if (isValid(ip)) {
//         cout << "1" << endl; // Hợp lệ
//     } else {
//         cout << "0" << endl; // Không hợp lệ
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <map>
// using namespace std;

// void countFrequencies(vector<int>& A) {
//     map<int, int> frequency; // Sử dụng map để lưu phần tử và tần số

//     // Đếm tần số của từng phần tử
//     for (int num : A) {
//         frequency[num]++;
//     }

//     // In kết quả
//     for (const auto& entry : frequency) {
//         cout << entry.first << " " << entry.second << endl;
//     }
// }

// int main() {
//     vector<int> A = {1, 2, 2, 3, 1, 4, 4, 5};
//     countFrequencies(A);
//     return 0;
// }


Book, Person
virtual long moneyPay() = 0;
        virtual void display(){
            cout << "name: " << name << endl;
            cout << "age: " << age <<endl;
            cout << "add: " << add <<endl;
            cout << "List book borrowed:  " <<endl;
            for(int i = 0; i < vb.size(); i++){
                vb[i].display();
            }
            cout << "Money pay: " << moneyPay() << endl;
        }
    static void sortPersonAge(vector<Person *> &vt){
    sort(vt.begin(), vt.end(), [](Person *a, Person *b){
        return a->getAge() <b->getAge();
    })
    ;
    }
    static vector<int> getListAge(vector<Person *> vt){
        vector<int> str;
        for(int i = 0; i < vt.size(); i++){
            if (!(find(str.begin(), str.end(), vt[i]->getAge())) != str.end()){
                str.push_back(vt[i]->getAge());
            }
        }
        return str;
    }
    static vector<Book> getMaxBookBorrowed(vector<Person *> vp, vector<Book> vB){
        vector<int> count(vB.size(), 0);
        for(int in= 0; i < vB.size();i++){
            for(int j = 0; j < vp.size(); j++){
                vector<Book> b(vp[j]->getVB());
                for(int k = 0; k < b.size(); k++){
                    if(vB[i].getNameBook() == b[k].getNameBook()){
                        count[i] ++;
                    }
                }
            }
        }
        int max = *max_element(count.begin(), count.end());
        vector<Book> res;
        for(int i = 0; i<vB.size(); i++){
            if(count[i] == max){
                res.push_back(vB.[i]);
            }
        }
        return res;
    }
};
int main(){
    vector<Book> books(5);
    books[0] = Book("A", "A", 10);
    books[1] = Book("B", "B", 15);
    books[2] = Book("C", "C", 12);
    books[3] = Book("D", "D", 9);
    books[4] = Book("E", "E", 10);

    Children children[3];
    children[0] = Children("A", 10, "HN", {books[0], books[1]});
    children[1] = Children("B", 20, "HN", {books[2], books[4], books[3]});
    children[2] = Children("C", 30, "HN", {books[3], books[4]});

    Adult adults[2];
    adults[0] = Adult("A", 1, "HN", {books[0], books[1]});
    adults[1] = Adult("B", 2, "HN", {books[0], books[1], books[2], books[3], books[4]});
    vector<Person *> persons(5);
    persons[0] = &children[0];
    persons[1] = &children[1];
    persons[2] = &children[2];
    persons[3] = &adults[0];
    persons[4] = &adults[1];

    cout << "Sap xep theo tuoi" << endl;
    Person::sortPersonAge(persons);
    for (auto v : persons)
        v->display();

    cout << "Danh sach tuoi" << endl;
    for (auto v : Person::getListAge(persons))
        cout << v << " ";
        cout << endl
         << "Sach muon nhieu nhat" << endl;
    for (auto v : Person::getMaxBookBorrowed(persons, books))
        v.display();
}

//food
void display(){
            cout << "Name: " << Food::getName() << endl;
            cout << "Price: " << Food::getPrice() << endl;
            cout << "Number box: " << this->numberBox << endl;
        }

        static void sortNumberBox(vector<CannedFood> &vt) {
            for(int i = 0; i < vt.size() - 1; i++){
                for(int j = i + 1; j < vt.size(); j++){
                    if(vt[j].numberBox > vt[i].numberBox){
                        swap(vt[j].numberBox , vt[i].numberBox);
                    }
                }
            }
        }
int main(){
    vector<CannedFood> cfoods(3);
    cfoods[0] = CannedFood("A", 15, 20);
    cfoods[1] = CannedFood("B", 20, 30);
    cfoods[2] = CannedFood("C", 10, 15);

    int maxNumberBoxIndex = 0;
    for(int i = 0; i < cfoods.size() ; i++){
        if(cfoods[i].getNumberBox() > cfoods[maxNumberBoxIndex].getNumberBox()) maxNumberBoxIndex = i;
    }
    cfoods[maxNumberBoxIndex].setPrice(cfoods[maxNumberBoxIndex].getPrice());
    CannedFood::sortNumberBox(cfoods);
    for(auto v : cfoods) v.display();


    vector<NonCFood> nfoods(2);
    nfoods[0] = NonCFood("E", 20, 25);
    nfoods[1] = NonCFood("D", 1, 25);

    int maxWeightIndex = 0;
    for(int i = 0; i < nfoods.size(); i++){
        if(nfoods[i].getWeight() > nfoods[maxWeightIndex].getWeight()) maxWeightIndex = i;
    }
    nfoods[maxWeightIndex].setPrice(nfoods[maxWeightIndex].getPrice());
    NonCFood::sortWeight(nfoods);
    for(auto j : nfoods) j.display();

}


//Person, Employee
virtual long salary() = 0;
        static vector<Person *> findPerson(vector<Person *> p){
            vector<Person *> v;
            for(int i = 0; i < p.size(); i++){
                if(p[i]->add == "HN"){
                    v.push_back(p[i]);
                }
            }
            return v;
        }
//FT   
static vector<EmployeeFT> getMaxSalary(vector<EmployeeFT> ft){
            long max = ft[0].salary();
            for(int i = 0; i < ft.size(); i++){
                if(ft[i].salary() > max){
                    max = ft[i].salary();
                }
            }
            vector<EmployeeFT> v;
            for(int i = 0; i < ft.size(); i++){
                if(max == ft[i].salary()) v.push_back(ft[i]);
            }
            return v;

        }

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

//Score
virtual double pointA(){
            return 0;
        }
        virtual double pointB(){
            return 0;
        }
        virtual double pointC(){
            return 0;
        }
        virtual double pointD(){
            return math + literature + english;
        }
        virtual double avgPoint() = 0;

        virtual void display(){
            cout << "Avg: " << avgPoint() <<endl;
        }
        static double getMaxAvg(vector<score *> vt){
            double max = vt[0]->avgPoint();
            for(int i = 0; i < vt.size(); i++){
                if(vt[i]->avgPoint() > max){
                    max = vt[i]->avgPoint();
                }
            }
            return max;
        }
        static double getMinAvg(vector<score *> vt){
            double min = vt[0]->avgPoint();
            for(int i = 0; i < vt.size(); i++){
                if(vt[i]->avgPoint() < min){
                    min = vt[i]->avgPoint();
                }
            }
            return min;
        }
        bool isPass(){
            if(avgPoint() > 5){
                return true;
            }
            return false;
        }
        static double getMaxPointA(vector<score *> vt){
            double max = vt[0]->pointA();
            for(int i = 1; i< vt.size(); i++){
                if(vt[i]->pointA() > max){
                    max = vt[i]->pointA();
                }
            }
            return max;
        }
        static double getMaxPointB(vector<score *> vt){
            double max = vt[0]->pointB();
            for(int i = 1; i< vt.size(); i++){
                if(vt[i]->pointB() > max){
                    max = vt[i]->pointB();
                }
            }
            return max;
        }
        static double getMaxPointC(vector<score *> vt){
            double max = vt[0]->pointC();
            for(int i = 1; i< vt.size(); i++){
                if(vt[i]->pointC() > max){
                    max = vt[i]->pointC();
                }
            }
            return max;
        }
        static double getMaxPointD(vector<score *> vt){
            double max = vt[0]->pointD();
            for(int i = 1; i< vt.size(); i++){
                if(vt[i]->pointD() > max){
                    max = vt[i]->pointD();
                }
            }
            return max;
        }

double pointA(){
            return math + chemistry + physic;
        }
        double pointB(){
            return math + chemistry + biology;
        }
        double pointNatural(){
            return physic + chemistry + biology;
        }
        double avgPoint(){
            return (math + literature + english + physic + chemistry + biology) /6;
        }

//People , Family, Group
//Family
void display(){
            cout << "NameF : " << nameF << endl;
            cout << "Number Member: " << p.size() << endl;
            cout << "Address: " << add << endl;
            cout << "Status: " << status << endl;
            cout << "List information menber: " << endl;
            for( int i = 0; i < p.size() << i++){
                p[i]. display();
            }
        }

       // getPoorHousehold(fa: vector<Family>): static vector<Family> 
       //là phương thức tĩnh đầu vào là danh sách các hộ ra đình và đầu ra là danh sách các hộ gia đình đang có status = "poor".
        static vector<Family> getPoorHousehold(vector<Family> &fa){
            vector<Family> v;
            for(int i = 0; i < fa.size() < i++){
                cout << fa[i].getStatus << endl;
                if(fa[i].getStatus == "poor"){
                    v.push_back(fa[i]);
                    cout << fa[i].getNameF << endl;
                }
            }
            return v;
        }

        //findFamilySurname(fa: vector<Family>,surename: string): static vector<Family> 
        //là phương thức tĩnh đầu vào là danh sách các hộ gia đình và tên của chủ hộ bạn muốn tìm; đầu ra là một danh sách các hộ gia đình có tên chủ hộ giống với surename.
        static vector<Family> findFamilySurName(vector<Family> &fa, string surename){
            vector<Family> v;
            for (int i = 0; i < fa.size() <, i++){
                if(fa[i].getNameF == surename){
                    v.push_back(fa[i]);
                }
            }
            return v;
        }




//Group
int getNumberFamily(){
            return f.size();
        }

        //avgAgeGroup(v: Group): static double 
        //là phương thức tĩnh có đầu vào là một Group và đầu ra là độ tuổi trung bình của Group đó.

        
        static double avgAgeGroup(Group &v)
    {
        vector<Family> F(v.getF());
        double sum = 0;
        int n = 0;
        for (int i = 0; i < F.size(); i++)
        {
            vector<People> P(F[i].getP());
            for (int j = 0; j < P.size(); j++)
            {
                sum += P[j].getAge();
            }
            n += P.size();
        }
        return sum / n;
    }
    static vector<People> getPeopleHaveNotJob(Group &g)
    {
        vector<People> v;
        vector<Family> F(g.getF());
        for (int i = 0; i < F.size(); i++)
        {
            vector<People> P(F[i].getP());
            for (int j = 0; j < P.size(); j++)
            {
                if (P[j].getJob() == "")
                {
                    v.push_back(P[j]);
                }
            }
        }
        return v;
    }

