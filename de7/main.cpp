
#include "score.cpp"
#include "scoreNatural.cpp"
#include "scoreSocial.cpp"


int main(){
    vector<scoreNatural> naturals(3);
    naturals[0] = scoreNatural(5, 6, 4, 7, 8, 1);
    naturals[1] = scoreNatural(5, 5, 2, 7, 8, 1);
    naturals[2] = scoreNatural(6, 6, 4, 7, 8, 10);

    vector<scoreSocial> socials(3);
    socials[0] = scoreSocial(6, 7, 8, 3, 4, 5);
    socials[1] = scoreSocial(6, 3, 8, 3, 4, 5);
    socials[2] = scoreSocial(1, 1, 1, 3, 4, 5);

    for(auto &v : naturals) 
        if(v.isPass()) v.display();

    for(auto &v : socials)
        cout << v.avgPoint() << endl;

    vector<score *> scores({&naturals[0], &naturals[1], &socials[0]});
    for(auto &v : scores) v->avgPoint();
    cout << "Trung binh lon nhat:" << score::getMaxAvg(scores) << endl;
    cout << "Trung binh nho nhat:" << score::getMinAvg(scores) << endl;
    cout << "Trung binh lon nhat khoi A:" << score::getMaxPointA(scores) << endl;
    cout << "Trung binh lon nhat khoi B:" << score::getMaxPointB(scores) << endl;
    cout << "Trung binh lon nhat khoi C:" << score::getMaxPointC(scores) << endl;
    cout << "Trung binh lon nhat khoi D:" << score::getMaxPointD(scores) << endl;
}