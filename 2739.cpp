#include <iostream>
#include <string>

using namespace std;

int gugu(int n)
{
    for(int i = 1; i<10; i++)
    {
        cout << to_string(n) + " * " + to_string(i) + " = " + to_string(n * i);
        cout <<endl;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    gugu(n);
}
