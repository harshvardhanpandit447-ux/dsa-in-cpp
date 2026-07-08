#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<("Enter n=");
    cin>>n;

//square pattern
for(int i=1;i<=n;i++){
    int sum=1;
    for(int j=1;j<=i;j++){
        cout<<sum;
       sum=sum+1;
       
    }
    cout<<endl;
}





  return 0;
}