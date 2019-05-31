#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int n, l;
    vector<int> lanterns;
    cin >> n >> l;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        lanterns.push_back(x);
    }
    sort(lanterns.begin(), lanterns.end());
    double maks = lanterns[0];
    for (int i = 1; i < lanterns.size(); i++)
    {
        maks = max(maks, (lanterns[i] - lanterns[i - 1]) / 2.);
    }
    maks = max(maks, (double)(l - lanterns[lanterns.size() - 1]));
    printf("%lf\n", maks);
    return 0;
}