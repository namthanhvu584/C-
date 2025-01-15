#include<iostream>
#include <vector>
using namespace std;

void stat(const vector<float>& v, float *min, float *max, float *avg){
    int i, size;
    float sum;
    sum = *min = *max = v[0];
    size = v.size();

    for(i = 0; i < size; i++){
        if(v[i] > *max) *max = v[i];
        if(v[i] < *min) *min = v[i];
        sum += v[i];
    }
    *avg = sum / size;
}

int main(){
    int i;
    float min, max, avg, val;
    vector<float> prc_v;
    while(1) {
        cout << "Nhap gia: ";
        cin >> val;
        if(val <= 0) break;
        prc_v.push_back(val);
    }
    if(prc_v.size() == 0) return 0;
    stat(prc_v, &min, &max, &avg);
    cout << "Max= " << max << "MIn= " << min << "Avg=" << avg << '\n';
    return 0;
}