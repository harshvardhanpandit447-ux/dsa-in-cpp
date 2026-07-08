#include <iostream>
using namespace std;

int main(){
    
int n;
int reminder;
int q=0;
cout<<("n=");
cin>>n;
    
while(n>0){

    reminder=n%10;
    q=q*10+reminder;
    n/=10;

}
cout<<q<<endl;



    return 0;

}