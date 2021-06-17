#include <iostream>
using namespace std;
int main(){
int n = 5;
int k  =3 ;
int arr[n];
int page_no = 0;
int count =1;
for (int i=0; i<n;i++){
cin >> arr[i];
}

for (int i = 0;i<n;i++){
page_no++;
count =1;

for (int j=1;j<=arr[i];j++){

if (count == k){
count = 0;
cout << page_no<<endl;
page_no++;
}

count++;
}

}

cout << endl;
return 0;

}
