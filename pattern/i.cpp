#include <iostream>
using namespace std;

int main() {
    int n=10;
    int sum=1;
for(int i=0;i<=n;i++){
    for(int j=1;j<=i+2;j++){
        sum=sum+1;
        cout<<(sum);
    }
    cout<<endl;
}
  return 0;
}