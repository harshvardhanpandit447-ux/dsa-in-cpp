#include<iostream>
using namespace std;
int main(){
int num = 0;
int n;
    cout<<("n=")<<endl;
    cin>>n;
    while(n>0){
        num = num*10 + n%10;
        n = n/10;
    }
   
    cout<<num;
    return 0;
}