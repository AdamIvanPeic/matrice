#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<climits>
using namespace std;
int main(void)
{
    int n, m, k;
    cin >> n >> m;

    vector<vector<int>> a, t;

    for(int i = 0; i < n; i++)
    {
        vector<int> pv;
        for(int j = 0; j < m; j++)
        {
            int p;
            cin >> p;
            pv.push_back(p);
        }
        a.push_back(pv);
    }
    cin >> k;

    for(int i = 0; i < a.size(); i++)
    {
        int br = 0;
        for(int j = 0; j < a.at(i).size(); j++)
            br += a.at(i).at(j);
        t.push_back({br, i});
    }

    sort(t.begin(),t.end());
    vector<int> b;
    for(int i = 0; i < k; i++)
        b.push_back(t.at(i).at(1));

    for(int i = 0; i < b.size(); i++)
        cout << b.at(i) << ' ';

    return 0;
}
