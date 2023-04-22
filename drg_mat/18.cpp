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
    int n, bs = 0, bk = 0, bm = 0;
    cin >> n;
    int a[n][3];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < 3; j++)
            cin >> a[i][j];

    for(int i = 0; i < n; i++)
    {
        if((a[i][0] == 0 && a[i][1] > a[i][2]) || (a[i][2] == 0 && a[i][1] > a[i][0]))
            bk++;
        else if((a[i][0] == 0 && a[i][2] > a[i][1]) || (a[i][1] == 0 && a[i][2] > a[i][0]))
            bm++;
        else if((a[i][1] == 0 && a[i][0] > a[i][2]) || (a[i][2] == 0 && a[i][0] > a[i][1]))
            bs++;
    }

    cout << bs << endl << bk << endl << bm;

    return 0;
}
