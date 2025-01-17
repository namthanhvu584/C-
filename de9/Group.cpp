#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Family.h"

class Group{
    private:
        string nameGr;
        vector<Family> f;
    public:
        Group(){}
        Group(string nameGr, vector<Family> f ): nameGf(name), f(f){}
        string getNameGr(){
            return nameGr;
        }
        vector<Family> getF(){
            return f;
            }
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


};