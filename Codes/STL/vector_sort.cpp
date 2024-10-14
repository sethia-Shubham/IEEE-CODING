#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int len;
    cin>>len;
    vector<int>v;
    for(int i=0;i<len;i++) {
        int x;
        cin>>x;
        v.emplace_back(x);
    }
    sort(v.begin(),v.end());
    for(auto i : v){
        cout<<i<< " ";
    }
    return 0;
}
