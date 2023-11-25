// #include<iostream>
// using namespace std;
// int main(){

// int salary;
// cout << "Enter your salary you got this month:";
// cin >> salary;

// //** if-else statement **
// if(salary >= 4000){
//     cout << "We will buy pizza and Biryani with Beer from the canteen:";
//     }
// else if(salary < 2200){
//     cout << "We will buy Masala Dhosa & Coffee from the canteen:";
// }
//     else{                           
//         cout << "We will buy only Burgers and cold drinks from the canteen:";
//     }
// }


#include<iostream>
using namespace std;
int main(){

int salary;
cout << "Enter your salary you got this month:";
cin >> salary;

//** if-else statement **
if(salary >= 4000 && salary <= 5000){
    cout << "We will buy pizza and Biryani with Beer from the canteen:";
    }
else if(salary >= 3000 && salary<= 3500){
    cout << "We will buy Masala Dhosa & Coffee from the canteen:";
}
else if(salary >= 2000 && salary<= 2500){
    cout << "We will buy Allu paratha & Cold drinks from the canteen:";
    }
    else{                           
        cout << "We will buy only Burgers and  Chocolate Tea from the canteen:";
    }
}
