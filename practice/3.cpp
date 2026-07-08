#include <iostream>
using namespace std;

int main() {
    int n;
    int sum=1;
    cout<<("Enter n=");
    cin>>n;

//square pattern
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<sum;
        sum=sum+1;
    }
    cout<<endl;
}





  return 0;
}