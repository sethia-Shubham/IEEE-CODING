#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int q;
    cin>>q;
    int i=1;
    while(i<=q)  {
        int qe;
        cin>>qe;
        int a=0;
        int pos;
        for(int k=0;k<n;k++){
            if(v[k]==qe) {
                a=1;
                pos=k;
                break;
                }
    }
        if(a==1) cout<< "Yes "<<pos+1<<endl;
            else {
                auto lb=lower_bound(v.begin(),v.end(),qe);
                cout<<"No "<<distance(v.begin(), lb)+1<<endl;
            }
        i++;
    }
    return 0;
}

