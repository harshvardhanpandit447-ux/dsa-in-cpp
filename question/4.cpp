//rotate the given array 'a' by steps,where k is non negative note:k can be greater than n as well where n is sizeof array a
#include <iostream>
#include<vector>

using namespace std;

int main() {
    int k=1;
    vector<int>vec={5,4,2,1,3};
    int n=vec[4];
int num=0;
   for(int i=0;i<k;i++){
vec.insert(vec.begin(),n);
 }
 vec.pop_back();

for (int i=0 ; i < 5; i++)
{
    
    cout<<vec[i]<<endl;
}

  return 0;
}