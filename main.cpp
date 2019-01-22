#include <iostream>
#include <string>

using namespace std;


/*
 * Simple year guesser  program that tell the user the year they were born after they enter their name and age
 * one of my first C++ code
 */

int main() {
    string fname, lname;
    int age;
    int dob;
    const int YEAR = 2019;

    cout << "Please enter your first name and last name : ";

    cin >> fname >> lname;

    if (fname == lname) {
        cout << "Why do you have the same name Bro!!"<<endl;
        cout<<"Thats Kinda weird but lets move on"<<endl;
    } else if (fname < lname) {
        cout << fname << " " << "is alphabetically before " << lname << endl;
    } else {
        cout << fname << " " << "is alphabetically after " << lname << endl;
    }


    cout<<"Please enter your current age: ";

    cin>>age;

    dob = YEAR - age;

    cout<<"Hello "<<lname<<" "<<fname<<endl;
    cout<<"You were born in "<< dob<<endl;

    return 0;
}