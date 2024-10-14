#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> numSet;
    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        int queryType, value;
        cin >> queryType >> value;

        switch (queryType) {
            case 1:
                numSet.insert(value);
                break;
            case 2:
                numSet.erase(value);
                break;
            case 3:
                if (numSet.find(value) != numSet.end()) {
                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
                break;
        }
    }

    return 0;
}




