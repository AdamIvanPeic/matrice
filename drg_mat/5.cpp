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

    vector<vector<int>> a;

    for(int i = 0; i < n; i++)
    {
        vector<int> pv;
        for(int j = 0; j < m; j++)
        {
            int p;
            cin >> p;
            pv.push_back(p);
        }
        a.push_back(pv);
    }

    for(int i = 0; i < a.size()-1; i++)
        for(int j = 0; j < a.at(0).size()-1; j++)
            if(a.at(i).at(j) != a.at(i+1).at(j+1))
            {
                cout << "false";
                return 0;
            }

    cout << "true";

    return 0;
}
