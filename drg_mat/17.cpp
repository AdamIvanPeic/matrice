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
    int a[100+1], k[100+1], b[100+1][100+1];
    int n, m, br = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;

    for(int i = 0; i < m; i++)
    {
        cin >> k[i];

        bool fl = true;
        for (int j = 0; j < k[i]; j++)
        {
            cin >> b[i][j];
            for(int x = 0; x < n; x++)
                if(a[x] == b[i][j])
                    fl = false;
        }

        if(fl)
            br++;
    }

    cout << br;

    return 0;
}
