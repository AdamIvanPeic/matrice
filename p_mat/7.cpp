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
    int br = n-1;
    int a[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            if(j == br)
                a[i][j] = 5;
            else if(j == br-1)
                a[i][j] = 1;
            else if(j == br+1)
                a[i][j] = -1;
            else
                a[i][j] = 0;
        br--;
    }


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }

    return 0;
}
