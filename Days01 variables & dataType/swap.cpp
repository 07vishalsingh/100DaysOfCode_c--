#include<iostream>
using namespace std;
int main(){
//*swap two number using input fun*
int num1,num2;
cout << "Enter the first number to test:" << endl;
cin >> num1;
cout << "Enter the second number to test:" << endl;
cin >> num2;

cout << "original values:"<<"num1 = "<<num1<<", num2 ="<<num2  << endl;

//*swapped the number*
int temp;
temp = num1;
num1 = num2;
num2 = temp;

//*displyaing output that is swapped out*
cout << "Swapped values:" <<"num1 = " <<num1 <<", num2 = "<<num2 << endl;
}