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

    vector<vector<int>> a;

    for(int i = 0; i < n; i++)
    {
        vector<int> pv;
        for(int j = 0; j < n; j++)
        {
            int p;
            cin >> p;
            pv.push_back(p);
        }
        a.push_back(pv);
    }

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            int p = abs(a.at(i).at(j)) - 1;
            if(a.at(i).at(p) < 0)
            {
                cout << "false";
                return 0;
            }
            a.at(i).at(p) = -a.at(i).at(p);
        }

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            int p = abs(a.at(j).at(i)) - 1;

            if(a.at(p).at(i) > 0)
            {
                cout << "false";
                return 0;
            }
            a.at(p).at(i) = abs(a.at(p).at(i));
        }

    cout << "true";

    return 0;
}
