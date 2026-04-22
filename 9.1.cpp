#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    int n, x;

    // Input
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    // Method 1: using library
    reverse(v.begin(), v.end());

    cout << "\nReversed using reverse(): ";
    for (int i : v) cout << i << " ";

    // Method 2: manual (reverse again to original first)
    reverse(v.begin(), v.end());

    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = temp;
    }

    cout << "\nReversed manually: ";
    for (int i : v) cout << i << " ";

    return 0;
}


