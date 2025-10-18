#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& a, int x) {
    int l = 0, r = a.size() - 1;
    while (l <= r) {
        int m = l + ((r - 1)>> 1);
        if(a[m] == x) return m;
        else if(a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return -1;
}


int lowerBound(vector<int>& a, int x) {
    int l = 0, r = a.size();
    while (l < r) {
        int m = l + ((r - l) >> 1);
        if(a[m] < x) l = m + 1;
        else r = m;
    }
    return l;
}

int upperBound(vector<int>& a, int x) {
    int l = 0, r = a.size();
    while (l < r) {
        int m = l + ((r - l) >> 1);
        if(a[m] <= x) l = m + 1;
        else r = m;
    }
    return l;
}


int firstOccurence(vector<int>& a, int x) {
    int l = 0, r = a.size() - 1;
    int ans = -1;
    while (l <= r) {
        int m = l + ((r - l) >> 1);
        if(a[m] == x) {
            ans = m;
            r = m - 1;
        }
        else if(a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return ans;
}


int lastOccurence(vector<int>& a, int x) {
    int l = 0, r = a.size() - 1;
    int ans = -1;
    while (l <= r) {
        int m = l + ((r - l) >> 1);
        if(a[m] == x) {
            ans = m;
            l = m + 1;
        }
        else if(a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return ans;
}



int main() {
    vector<int> a = {1, 2, 4, 4, 4, 7, 9, 10};
    cout << binarySearch(a, 7) << "\n";
    cout << lowerBound(a, 4) << "\n";
    cout << upperBound(a, 4) << "\n";
    cout << firstOccurence(a, 4) << "\n";
    cout << lastOccurence(a, 4) << "\n";
}