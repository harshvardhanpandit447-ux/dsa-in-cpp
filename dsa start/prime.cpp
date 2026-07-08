    #include<iostream>
using namespace std;
int main(){
 int checkprime;
 cout<<("Enter the number to be checked for prime:")<<endl;
 cin>>checkprime;
 for(int i=2;i<(checkprime-1);i++){
    if(checkprime%i==0){
        cout<<("Number is not a prime number")<<endl;
        break;
    }
    else{
        cout<<("Number is  prime number")<<endl;
        break;
    }
 }


 return 0;


}