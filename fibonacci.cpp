#include <iostream>
using namespace std;
int  main(){

short int num;

cout << "Enter the number of fibonacci series : ";
cin >> num;
long long int array[num];
for (int i = 0;i<num;i++){
if (i == 0){
array[i]=0;
}
else if(i ==1){
array[i]=1;
}
else{
array[i] = array[i-1]+array[i-2];

}

}

cout << "Finished Sunish !!! \n";
for (int j = 0; j <num; j++){
cout << array[j]<<" ";
}
cout <<endl;
return 0;
}
