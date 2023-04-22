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
    int n;
    cin >> n;

    vector<vector<int>> a;

    for(int i = 0; i < n; i++)
    {
        vector<int> pv;
        for(int j = 0; j < 2; j++)
        {
            int p;
            cin >> p;
            pv.push_back(p);
        }
        a.push_back(pv);
    }

    int br = 0;
    for(int i = 0; i < a.size(); i++)
        for(int j = i+1; j < a.size(); j++)
            if((a.at(i).at(0) == a.at(j).at(0) && a.at(i).at(1) == a.at(j).at(1)) || (a.at(i).at(0) == a.at(j).at(1) && a.at(i).at(1) == a.at(j).at(0)))
                br++;

    cout << br;

    return 0;
}
