#include<iostream>
using namespace std;
int main(){

//*switchstatement example*

char movieChoice,foodChoice;
int age;
double ticketPrice;
string foodItem;

//** Display movie options **
cout << " Movie options:\n";
cout << " A. Avenger:Endgame\n";
cout << " B. Black Panther\n";
cout << " C. Avatar\n";
cout << " Choose a movie(A,B, or C).\n";
cin >> movieChoice;

//** Display Food items **
cout << "Food Options :\n ";
cout << " 1. Pizza & Cold Drinks\n";
cout << " 2. Biryani & Cold Drinks\n";
cout << " 3. Burger & Cold Drinks\n";
cout << " Choose a food item(1, 2, or 3).";
cin >> foodChoice;

//** Display age categories **
cout << "Age categories:\n";
cout << " 1. Child(0-12 years)\n";
cout << " 2. Adult(13-59 years)\n";
cout << " 3. Senior(60+ years)\n";
cout << "Enter your age category(1,2, or 3).";
cin >> age;

//**Calculate ticket price based on mobie using a switch statement **

switch (movieChoice)
{
case 'A':
switch(age){
case 1:
    ticketPrice = 300.0; // *child*
    break;
    case 2:
    ticketPrice = 500.0; // *Adult*
    break;
    case 3:
    ticketPrice = 400.0; // *Senior*
    break;
}
    break;

    case 'B':
switch(age){
case 1:
    ticketPrice = 250.0; // *child*
    break;
    case 2:
    ticketPrice = 450.0; // *Adult*
    break;
    case 3:
    ticketPrice = 350.0; // *Senior*
    break;
}
    break;

    case 'C':
switch(age){
case 1:
    ticketPrice = 350.0; // *child*
    break;
    case 2:
    ticketPrice = 550.0; // *Adult*
    break;
    case 3:
    ticketPrice = 450.0; // *Senior*
    break;
}
    break;

default:
    cout << "Invalid movie choice.\n";
    return 1; //*Exit with an error code*
}

//*  DETERMINE THE SELECTED FOOD ITEM  *
switch (foodChoice)
{
case '1':
    foodItem = "Pizza & Popcorn";
    break;
    case '2':
    foodItem = "Hot Dog & Pepsi";
    break;
    case '3':
    foodItem = "Burger & Popcorn";
    break;
    default:
    cout << "Invalid food choice.\n";
    return 1; // *Exit with an error code*
    }



    //** Display the selected  options and total cost**
    cout << "\nSummary:\n";
    cout << " Movie:";
    switch(movieChoice){
    case
        'A' : cout << " Avengers: Enggame\n";
        break;
        case
        'B' : cout << " Black Panther\n";
        break;
        case
        'C' : cout << " Avatar\n";
        break;
    }
cout << "Age Category:";
    switch(age){
    case 1:
        cout << "Child\n";
        break;
        case 2:
            cout << " Adult\n";
            break;
            case 3:
                cout << " Senior\n";
                break;
    }
    cout << "Food Item:" << foodItem << endl;
    cout << "Ticket Price: $" << ticketPrice;
    return 0;
    }