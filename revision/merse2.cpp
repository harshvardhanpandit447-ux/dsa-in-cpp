#include <iostream>
#include<vector>

using namespace std;

int main() {
     int array1[6]={1,2,3,4,5,6};
    int array2[4]={7,8,9,10};
    int result[10];
    int i=0;
    int j=0;
    int k=0;
    int n=6;
    int m=4;
    while(i<n && j<m){
    if(array1[i]<array2[j])
    {


result[k]=array1[i];
i++;
k++;
    }
    else {
        result[k]=array2[j];
        j++;
        k++;
    }
    

}
while(i<m){
       result[k]=array1[i];
       i++;
       k++;
}
while(j<n){
    result[k]=array2[j];
    j++;
    k++;
}
    
for(int i=0;i<n+m;i++){
cout<<result[i];    

}

cout<<endl;
  return 0;
}