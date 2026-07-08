#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num = 1;
    int x = 0;
    vector<int> vec(5);
    for (int i = 0; i < 5; i++)
    {
        cout<<("Enter the value vector");
        cin >> vec[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (num == vec[i])
        {
            x = x + 1;
        }
    }
    cout << ("The number od times number has occure is ") << x << endl;

    return 0;
}