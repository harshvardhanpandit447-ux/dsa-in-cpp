
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    int c;
    int num;

    
    cout<<("Enter the array size :");
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout<<("Enter array number array[") <<i+1<< ( "]:");
        cin >> array[i];
       // c = array[i];
      
    }
    int nums = INT_MIN;
    int a = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums <= array[i])
        {
            nums = array[i];
            a = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (nums == array[i])
        {
            array[i] = INT_MIN;
        }
    }
    array[a] = INT_MIN;
    num = INT_MIN;

    for (int j = 0; j < n; j++)
    {

        if (array[j] >= nums)
        {
            num = array[j];
        }
    }

    
    if(num==INT_MIN){
        num=nums;

    }
    
    
    cout << num;
    cout << endl;
    
    return 0;
}