#include <iostream>
using namespace std;

int main() {
    int n;
    int num=0;
    cout<<("Enter n=");
    cin>>n;

//square pattern
for(int i=1;i<=n;i++){
    num=num+1;
    for(int j=1;j<=i;j++){
        cout<<num;
    }
    cout<<endl;
}





  return 0;
}