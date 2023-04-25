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
    int a[n][m];

    cin.ignore();
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];

    for(int i = 0; i < n; i++)
    {
        vector<int> p;
        for(int j = 0; j < n; j++)
            p.push_back(a[j][i]);
        sort(p.begin(), p.end());
        for(int j = 0; j < n; j++)
            a[j][i] = p.at(j);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }

    return 0;
}
