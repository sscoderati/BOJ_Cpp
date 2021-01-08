#include <iostream>

using namespace std;

int main()
{
    int person, width;
    cin >> person >> width;
    int news[5];
    cin >> news[0] >> news[1] >> news[2] >> news[3] >> news[4];
    for(int i = 0; i < 5; i++)
    {
        cout << news[i] - person * width << ' ';
    }
    return 0;
}
