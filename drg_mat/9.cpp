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
    int n, m, r, c, br = 0;
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
    cin >> r >> c;
    if(a.size()*a.at(0).size() != r*c)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
                cout << a.at(i).at(j) << ' ';
            cout << endl;
        }
        return 0;
    }

    vector<int> pv;
    for(int i = 0; i < a.size(); i++)
        for(int j = 0; j < a.at(0).size(); j++)
            pv.push_back(a.at(i).at(j));

    vector<vector<int>> b(r, vector<int> (c));
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
        {
            b.at(i).at(j) = pv.at(br);
            br++;
        }

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            cout << b.at(i).at(j) << ' ';
        cout << endl;
    }

    return 0;
}
