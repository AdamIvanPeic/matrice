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

    for(int i = 0; i < a.size(); i++)
        for(int j = 0; j < a.size(); j++)
            if((i == j && a.at(i).at(j) == 0) || (a.size()-j-1 == i && a.at(i).at(j) == 0) || ((i != j && a.at(i).at(j) != 0) && (a.size()-j-1 != i && a.at(i).at(j) != 0)))
            {
                cout << "false";
                return 0;
            }

    cout << "true";

    return 0;
}
