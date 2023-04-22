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
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a;

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

    int mn, mx;
    vector<int> p;

    for(int i = 0; i < a.size(); i++)
    {
        int k = 0;
        mn = INT_MAX;

        for(int j = 0; j < a.at(0).size(); j++)
            if(mn > a.at(i).at(j))
            {
                mn = a.at(i).at(j);
                k = j;
            }

        mx = mn;

        for(int j = 0; j < a.size(); j++)
            mx = max(mx, a.at(j).at(k));

        if(mn == mx)
            p.push_back(mn);
    }

    for(int i = 0; i < p.size(); i++)
        cout << p.at(i);

    return 0;
}
