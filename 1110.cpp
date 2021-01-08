#include <iostream>

using namespace std;

int cycle(int n, int m)
{
    int temp = n / 10 + m;
    if(temp >= 10) temp %= 10;
    return m * 10 + temp;
}

int main()
{
    int i, n = 0, m, ret = 0, cnt = 0;
    cin >> i;
    if(i > 0 && i < 10)
    {
        i *= 10;
        n = i;
    }
    else if(i == 0)
    {
        cout << "1";
        return 0;
    }
    else n = i;
    
    m = n % 10;
    while(ret != i)
    {
        ret = cycle(n, m);
        n = ret;
        m = ret % 10;
        cnt++;
    }
    cout << cnt;
}
