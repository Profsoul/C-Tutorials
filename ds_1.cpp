#include <iostream>

using namespace std;

int main(){
int a[100] = {3,4,5,3,4};

int pos,value;

cout <<"Enter Position to insert value ";
cin >> pos;

cout << "Enter the Value to insert ";
cin >> value;

int n = sizeof(a)/sizeof(a[0]) +1;

for(int n;n<pos+1;n--){
a[n]=a[n-1];
}
a[pos]=value;

for (int i=0;i<n;i++){
cout << a[i];

}
cout <<endl;

return 0;
}
