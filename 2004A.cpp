#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> points(n);

        for (int i = 0; i < n; i++) {
            cin >> points[i];
        }

        bool possible = true;
        for (int i = 1; i < n; i++) {
            if (points[i] - points[i - 1] < 2) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

