#include <iostream>
#include <string>
using namespace std;
int main()
{
    string odd = "I hate ";
    string even = "I love ";
    string that = "that ";
    string it = "it";
    int n;
    bool side = true;
    cin >> n;
    while (n > 0)
    {
        if (side)
            cout << odd;
        else
            cout << even;
        if (n > 1)
            cout << that;
        n--;
        side = !side;
    }
    cout << it << endl;
    return 0;
}