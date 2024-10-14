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
    int q1,q2a,q2b;
    cin>>q1;
    v.erase(v.begin()+q1-1);
    cin>>q2a>>q2b;
    v.erase(v.begin()+q2a-1,v.begin()+q2b-1);
    cout<<v.size()<<endl;
    for(auto i : v){
        cout<<i<< " ";
    }
}

