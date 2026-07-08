#include <iostream>
#include<vector>

using namespace std;

int main() {
    vector<int>vec;
    vec.push_back(25);
    cout<<("size=")<<vec.size()<<endl;
    for(int i:vec){
        
        cout << i;
    }
      cout << endl;
  return 0;
}
