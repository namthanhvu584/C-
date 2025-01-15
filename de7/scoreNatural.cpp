#pragma once
#include "score.cpp"
class scoreNatural : public score{
    private: 
        double physic;
        double chemistry;
        double biology;
    public:
        scoreNatural() {}
        scoreNatural(double physic, double chemistry, double biology, double math, double english, double literature) : score(math, literature, english), physic(physic), biology(biology), chemistry(chemistry){}
        double getPhysic(){
            return physic;
        }
        double getChemistry(){
            return chemistry;
        }
        double getBiology(){
            return biology;
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
};
