#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int>& a, int x) {
    for (int i = 0; i < (int)a.size(); i++)
        if (a[i] == x) return i;
    return -1;
}

int linearSearchReverse(vector<int>& a, int x) {
    for (int i = (int)a.size() - 1; i >= 0; i--)
        if (a[i] == x) return i;
    return -1;
}

int linearSearchRecursive(vector<int>& a, int idx, int x) {
    if (idx == (int)a.size()) return -1;
    if (a[idx] == x) return idx;
    return linearSearchRecursive(a, idx + 1, x);
}

vector<int> allOccurrences(vector<int>& a, int x) {
    vector<int> pos;
    for (int i = 0; i < (int)a.size(); i++)
        if (a[i] == x) pos.push_back(i);
    return pos;
}

int main() {
    vector<int> a = {5, 1, 3, 7, 3, 9, 3};
    int x = 3;
    cout << linearSearch(a, x) << "\n";
    cout << linearSearchReverse(a, x) << "\n";
    cout << linearSearchRecursive(a, 0, x) << "\n";
    vector<int> occ = allOccurrences(a, x);
    for (int i : occ) cout << i << " ";
    cout << "\n";
}
