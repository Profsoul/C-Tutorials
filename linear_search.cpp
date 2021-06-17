#include <iostream>
using namespace std;

int main(){
int len;
cout << "Enter the Length Of array"<<endl;
cin >> len;
int array[len];
for (int i=0;i<len;i++){
cin >> array[i];
}
cout << endl;
cout << "Your Array is "<<endl;
for (int i=0;i<len;i++){
cout << array[i]<<" ";}
cout << endl;

int key;

cout << "Enter the Key Value to find ";
cin >> key;

for (int i=0;i<len;i++){
if (array[i] == key){
cout << "Yes Found it"<<endl;
return 0;
break;

}}
cout << "No Element is Found"<<endl;

return 0;
}
