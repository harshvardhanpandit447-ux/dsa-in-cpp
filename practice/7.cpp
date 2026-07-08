#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<("Enter n=");
    cin>>n;

//square pattern
for(int i=0;i<=n;i++){
    for(int j=i+1;j<=i+1;j--){
        cout<<j;
    }
}
cout<<endl;





  return 0;
}