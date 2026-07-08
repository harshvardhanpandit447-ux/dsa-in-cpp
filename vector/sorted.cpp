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
        if (vec[i]<vec[i+1])
        {
            cout<<("IT is sorted array");
        }
    }
 

    return 0;
}