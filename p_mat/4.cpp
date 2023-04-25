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
    int br = 0, mx = 0;
    int a[5][4];

    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 4; j++)
            cin >> a[i][j];

    for(int i = 0; i < 5; i++)
    {
        int bri = 0;
        for(int j = 0; j < 4; j++)
            bri += a[i][j];
        if(bri > mx)
        {
            mx = bri;
            br = i+1;
        }
    }

    cout << br << ' ' << mx;

    return 0;
}
