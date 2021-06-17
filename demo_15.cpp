#include <iostream>
using namespace std;
void my_func(){
string name = "Hello Friend ";
cout << "This is print statement is from non return function my_func()"<<name.length()<<endl;
}

int main(){

cout << "This print statement is from return fucntion that is main function()"<<endl;

my_func();

}
