#pragma once
#include "score.cpp"
class scoreSocial : public score{

    private:
        double ce;
        double geography;
        double history;
    public:
        scoreSocial() {}
        scoreSocial(double math, double literature, double english, double ce, double geography, double history) : score(math, literature, english), ce(ce), geography(geography), history(history){}
        double getCe(){
            return ce;
        }
        double getGeography(){
            return geography;
        }
        double getHistory(){
            return history;
        }
        double pointC(){
            return literature + history + geography;
        }
        double pointSocial(){
            return ce + geography + history;
        }
        double avgPoint(){
            return (ce + geography + history +math + literature + english) / 6;
        }
};
