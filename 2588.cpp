#include <iostream>

using namespace std;

int main()
{
    int n1, n2, a, b, c, d;
    cin >> n1;
    cin >> n2;
    a = n1 * (n2 % 10);
    b = n1 * ((n2 / 10) % 10);
    c = n1 * (n2 / 100);
    d = n1 * n2;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    return 0;
}
