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

    int br = 0;
    int j = a.at(0).size()-1;
    for(int i =0; i < a.size(); i++)
    {
        br = br + a.at(i).at(i);
        if(i != j)
            br = br + a.at(i).at(j);
        j--;
    }

    cout << br;

    return 0;
}
