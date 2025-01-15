#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "People.h"

class Family {
    private:
        string nameF;
        string status;
        string add;
        vector<People> p;
    public:
        Family(){}
        Family(string nameF,
        string status,
        string add,
        vector<People> p) : status(status), add(add), p(p){nameF = p[0].getName}
        string getNameF(){
            return nameF;
        }
        string getStatus(){
            return status;
        }
        string getAdd(){
            return add;
        }
        vector<People> getP(){
            return p;
        }

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


};
