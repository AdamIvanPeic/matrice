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
    int n;
    cin >> n;
    int br = 0;
    int a[n][n];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            if(a[i][j] != 0 && j > br)
            {
                cout << "NE";
                return 0;
            }
        br++;
    }

    cout << "DA";

    return 0;
}
