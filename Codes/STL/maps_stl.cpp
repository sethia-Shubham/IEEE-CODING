#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map< string , int > mpp;
    int q;
    cin>>q;
    int i=0;
    int marks,case_type,val;
    string name;
    while(i<q){
        cin>>case_type;
        switch(case_type){
            case 1:
                cin>>name>>marks;
                mpp[name] += marks;
                break;
            case 2:
                cin>>name;
                mpp.erase(name);
                break;
            case 3:
                cin>>name;
                cout << mpp[name] << endl;
        }
        i++;
    }
}



