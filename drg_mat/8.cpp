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
    int n, br = 1;
    cin >> n;

    int a[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            a[i][j] = br+j;
        br += 2;
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }

    return 0;
}
