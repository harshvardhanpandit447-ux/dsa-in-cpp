#include<iostream>
using namespace std;
int  main(){
    int r1,c1;
    cout<<("Enter the value of r1:");
    cin>>r1;
    cout<<("Enter the value of c1:");
    cin>>c1;
int r2,c2;
int array[r1][c1];


for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
        cout<<("Enter the element of array:");
        cin>>array[i][j];
    }
}
r2=c1;
c2=r1;
int array2[r2][c2];
for(int i=0;i<r2;i++){
for(int j=0;j<c2;j++){
    array2[i][j]=array[j][i];

}
}
for(int i=0;i<r2;i++){
for(int j=0;j<c2;j++){
    cout<<array2[i][j]<<(" ");

}
cout<<endl;
}

return 0;

}
