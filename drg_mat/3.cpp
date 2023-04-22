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
        vector<int> p(i+1, 1);
        for(int j = 1; j < i; j++)
            p.at(j) = a.at(i-1).at(j-1) + a.at(i-1).at(j);
        a.push_back(p);
    }

    for(int i = 0; i < a.size(); i++)
    {
        for(int j = 0; j < a.at(i).size(); j++)
            cout << a.at(i).at(j) << ' ';
        cout << endl;
    }

    return 0;
}
