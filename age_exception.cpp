//Name: chirag tekwani
//PRN: 23070123042
Aim: Exception to check for age below 18.
  */
#include <iostream>
using namespace std;

int main() {
    float age;

    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 18) {
            throw age; 
        } 
        else if (age < 0) { 
            throw age; 
        } 
        else {
            cout << "Accepted" << endl;
            
        }
    }
    catch (float age) {
        if (age < 0) {
            cout << "\nInvalid age"<<endl;
        } 
        else {
            cout << "\nYou are below 18" << endl; 
        }
    }

    return 0;
}

/*Output
Enter your age: 10

You are below 18
*/
