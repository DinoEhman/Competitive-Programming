#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    int m, n, a, b;
    cin >> n >> m >> a >> b;
    int extra = 0;
    if (n > m)
    {
        if (n % m)
            extra += min(a * (n % m), b);
    }
    int ticks = 1;
    if (n > m)
    {
        ticks = n / m;
    }
    int mins = min(n * a, b * ticks + extra);
    cout << mins << endl;
    return 0;
}