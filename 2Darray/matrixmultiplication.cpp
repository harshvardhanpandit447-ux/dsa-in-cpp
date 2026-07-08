#include<iostream>
using namespace std;
int main(){
     int r1,c1;
     cout<<("Enter the value of r1:");
     cin>>r1;
     cout<<("Enter the value of c1:");
     cin>>c1;
int array[r1][c1];
for(int i=0;i<r1;i++){
for(int j=0;j<c1;j++){
    cout<<("Enter the element :");
    cin>>array[i][j];
}
}
     int r2,c2;
     cout<<("Enter the value of r2:");
     cin>>r2;
     cout<<("Enter the value of c2:");
     cin>>c2;
int array2[r2][c2];
if(r1!=c2){
    cout<<("The matrix multiplication is not possible");
}
else{
int array3[r1][c2];


for(int i=0;i<r2;i++){
for(int j=0;j<c2;j++){
    cout<<("Enter the elements of array2: ");
    cin>>array2[i][j];

}
}
for(int i=0;i<r1;i++){
    
    for(int j=0;j<c2;j++){
        int ans=0;
        for(int k=0;k<r2;k++){
            ans+=array[i][k]*array2[k][j];
        }
        array3[i][j]=ans;
    }
}

for(int i=0;i<r1;i++){
for (int  j = 0; j <c2 ; j++){
    cout<<array3[i][j]<<(" ");
   
}
cout<<endl;
}
}
return 0;
     
}