#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    int seat = 0;
    int sum = 0;
    for(int i=0; i<n; i++)
    {   
        
        int curr = v[i].second - v[i].first;
        sum = sum+curr;
        // cout << sum << "  " ;
        seat = max(seat, sum);
    }
    cout << seat << endl;
    return 0;
}