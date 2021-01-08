#include <iostream>

using namespace std;

int main()
{
    int num_index[2][10] = 
    {
    {0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
    {0, }
    };
    int A, B, C;
    cin >> A; cin >> B; cin >> C;
    int N = A * B * C;
    while(N != 0)
    {
        int div = N % 10;
        for(int i = 0; i < 10; i++)
        {
            if(div == num_index[0][i]) num_index[1][i]++;
            else continue;
        }
        N /= 10;
    }
    for(int i = 0; i < 10; i++)
    {
        cout << num_index[1][i] << endl;
    }
    return 0;
}
