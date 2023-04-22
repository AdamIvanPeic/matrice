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

    vector<vector<int>> cpy = a;

    for(int i = 0; i < n; i++)
    {
        reverse(cpy.at(i).begin(), cpy.at(i).end());
        for(int j = 0; j < n; j++)
            if(cpy.at(i).at(j) == 0)
                cpy.at(i).at(j) = 1;
            else
                cpy.at(i).at(j) = 0;
    }

    for(int i = 0; i < cpy.size(); i++)
    {
        for(int j = 0; j < cpy.at(i).size(); j++)
            cout << cpy.at(i).at(j) << ' ';
        cout << endl;
    }

    return 0;
}
