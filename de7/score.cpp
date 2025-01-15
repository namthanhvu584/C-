#pragma once
#include <iostream>
#include <vector>
using namespace std;
class score{
    protected:
        double math;
        double literature;
        double english;
    public:
        score(){}
        score(double math, double literature, double english) : math(math), literature(literature), english(english) {}
        double getMath(){
            return math;
        }
        double getLiterature(){
            return literature;
        }
        double getEnglish(){
            return english;
        }
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
        
};