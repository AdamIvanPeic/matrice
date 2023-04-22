#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cstdlib>
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

    int br = 0;
    for(int i = 0; i < a.size(); i++)
    {
        int brn = 0;
        for(int j = 0; j < a.at(i).size(); j++)
            brn += a.at(i).at(j);
        br = max(br, brn);
    }

    cout << br;

    return 0;
}
