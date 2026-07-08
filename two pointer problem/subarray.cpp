#include <iostream>
#include <vector>
using namespace std;
bool prifixsum(vector<int> &nums)
{
    int totalsum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        totalsum += nums[i];
    }
    int prifixsum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        prifixsum += nums[i];
        int suffixsum = totalsum - prifixsum;
        if (suffixsum == prifixsum)
        {
            return true;
        }
        
    }
    return false;
}

int main()
{
    vector<int> vec;
    int ele;
    for (int i = 0; i < 5; i++)
    {
        cout << ("Enter the value of ele:");
        cin >> ele;
        vec.push_back(ele);
    }
    cout << prifixsum(vec) << endl;

    return 0;
}