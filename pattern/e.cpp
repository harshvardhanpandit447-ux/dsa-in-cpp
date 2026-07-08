#include <iostream>
using namespace std;

int main()
{
  int n=5;
  int num=0;

  
    for (int i = 0; i <= n; i++) {
        num=num+1;
        
    for(int j=0;j <= i+1;j++){
       cout<<num;
    }
cout<<endl;
    }
    return 0;
}