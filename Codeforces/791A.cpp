#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int times = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        times++;
    }
    cout << times << endl;
    return 0;
}