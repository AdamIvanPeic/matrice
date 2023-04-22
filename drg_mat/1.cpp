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
    int n, m, br = 0;
    cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if(a[i][j] < 0)
                br++;
        }

    cout << br;

    return 0;
}
