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
    int n, m, x, br = 0;
    cin >> n >> m >> x;

    vector<vector<int>> a;

    for(int i = 0; i < x; i++)
    {
        vector<int> pv;
        for(int j = 0; j < 2; j++)
        {
            int p;
            cin >> p;
            pv.push_back(p);
        }
        a.push_back(pv);
    }

    int sk[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            sk[i][j] = 0;

    for(int i = 0; i < a.size(); i++)
    {
        for(int j = 0; j < m; j++)
            sk[a.at(i).at(0)][j] += 1;
        for(int j = 0; j < n; j++)
            sk[j][a.at(i).at(1)] += 1;
    }

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(sk[i][j]%2 != 0)
                br++;

    cout << br;

    return 0;
}
