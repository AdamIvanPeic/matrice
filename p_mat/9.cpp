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
    int n = 10;
    int a[n][n];

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            a[i-1][j-1] = i*j;

    cout << " *|    1    2    3    4    5    6    7    8    9   10" << endl;
    cout << "--|--------------------------------------------------" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << setw(2) << i+1 << "|";
        for(int j = 0; j < n; j++)
            cout << setw(5) << a[i][j];
        cout << endl;
    }

    return 0;
}
