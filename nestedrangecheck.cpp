
// home
// posts
// projects
// adventures
// Nested Ranges Check
// Explanation
// Here, in this problem we are given n ranges and we need to find out whether each range contains some other range and whether each range is contained by some other range.


// We can solve this problem by sorting the ranges by their start points in ascending order, and their end points in descending order (when their start points are same). Then we can also maintain a multiset of start points and end points.


// Now, first we will iterate over the ranges in the sorted order. For each range, we will remove the end point of the range from the multiset of end points. Then we will find the end point in the multiset of end points that is less than the or equal to the end point of the current range. If there is no such end point, then we can say that the current range contains no other range. Otherwise, we can say that the current range contains some other range.


// Similarly, we can do this for the 2nd part of the problem, except we will check for points greater than or equal to the current one.

// Code
// I was unable to find a way to solve this problem in Rust and Python, because they do not contain built-in data structures like multiset in C++. And my own implementations of multiset in Rust and Python were too slow to pass the time limit.


// However, I'll keep this post updated as soon as I find a way to solve this problem in Rust and Python.

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<tuple<int, int, int>> ranges;

    // two identical multiset of end points, for both checks
    multiset<int> x;
    multiset<int> y;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        ranges.push_back({a, b, i});
        x.insert(b);
        y.insert(b);
    }

    // we sort in such a way that the ranges above the current range cannot be contained in the current range.
    // but the below ranges that have the `b` value less than or equal to the current range can be contained in the current range.
    sort(ranges.begin(), ranges.end(), [](auto a, auto b) {
        auto [a1, a2, a3] = a;
        auto [b1, b2, b3] = b;
        if (a1 != b1) return a1 < b1;
        else return a2 > b2;
    });
    // for(int i=0;i<n;i++){
    //      auto [a1, a2, a3] = ranges[i];
    //     cout<<a1<<" "<<a2<<" "<<a3<<endl;
    // }
    vector<int> ans(n);
    for (auto [a, b, i] : ranges) {
        y.erase(y.find(b));
        ans[i] = y.upper_bound(b) != y.begin();
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << endl;

    sort(ranges.begin(), ranges.end(), [](auto a, auto b) {
        auto [a1, a2, a3] = a;
        auto [b1, b2, b3] = b;
        if (a1 != b1) return a1 > b1;
        else return a2 < b2;
    });
    // for(int i=0;i<n;i++){
    //        auto [a1, a2, a3] = ranges[i];
    //     cout<<a1<<" "<<a2<<" "<<a3<<endl;
    // }
    vector<int> ans2(n);
    for (auto [a, b, i] : ranges) {
        x.erase(x.find(b));
        ans2[i] = x.lower_bound(b) != x.end();
    }

    for (int i = 0; i < n; i++)
        cout << ans2[i] << " ";
    cout << endl;
    return 0;
}
