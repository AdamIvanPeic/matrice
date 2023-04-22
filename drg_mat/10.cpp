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
    int vn, n, m, br = 0;
    cin >> vn;

    vector<int> a;

    for(int i = 0; i < vn; i++)
    {
        int p;
        cin >> p;
        a.push_back(p);
    }
    cin >> n >> m;

    if(a.size() != n*m)
    {
        cout << "-";
        return 0;
    }

    vector<vector<int>> b(n, vector<int>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            b.at(i).at(j) = a.at(br);
            br++;
        }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout << b.at(i).at(j) << ' ';
        cout << endl;
    }

    return 0;
}
