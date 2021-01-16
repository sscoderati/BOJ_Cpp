#include <iostream>

using namespace std;

int main()
{
    int array[9];
    int max, index = 1;
    for(int i = 0; i < 9; i++)
    {
        cin >> array[i];
    }
    max = array[0];
    for(int i = 0; i < 9; i++)
    {
        if(max < array[i])
        {
            max = array[i];
            index = i + 1;
        }
        else
            continue;
    }
    cout << max << endl; cout << index;
}
