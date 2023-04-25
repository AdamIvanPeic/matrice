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
    int a[n][m], c[m][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            c[j][i] = a[i][j];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
            cout << setw(5) << c[i][j] << ' ';
        cout << endl;
    }

    return 0;
}

