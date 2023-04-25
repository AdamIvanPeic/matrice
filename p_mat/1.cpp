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
    int a[n][m], b[n][m], c[n][m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> b[i][j];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(a[i][j] > b[i][j])
                c[i][j] = a[i][j];
            else if(a[i][j] < b[i][j])
                c[i][j] = b[i][j];
            else
                c[i][j] = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            cout << setw(5) << c[i][j] << ' ';
        cout << endl;
    }

    return 0;
}
