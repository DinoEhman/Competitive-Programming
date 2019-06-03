#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> begin;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        begin.push_back(x);
    }
    vector<int> middle;
    for (int i = 0; i < n - 1; i++)
    {
        int x;
        cin >> x;
        middle.push_back(x);
    }
    sort(begin.begin(), begin.end());
    sort(middle.begin(), middle.end());
    vector<int> vDifferences;
    set_symmetric_difference(
        begin.begin(),
        begin.end(),
        middle.begin(),
        middle.end(),
        back_inserter(vDifferences));
    for (auto it = vDifferences.begin(); it != vDifferences.end(); it++)
    {
        cout << *it << endl;
    }
    vector<int> end;
    for (int i = 0; i < n - 2; i++)
    {
        int x;
        cin >> x;
        end.push_back(x);
    }
    sort(end.begin(), end.end());
    vDifferences.clear();
    set_symmetric_difference(
        middle.begin(),
        middle.end(),
        end.begin(),
        end.end(),
        back_inserter(vDifferences));
    for (auto it = vDifferences.begin(); it != vDifferences.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}