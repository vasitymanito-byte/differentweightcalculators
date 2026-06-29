/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    double weight;
    string weight_choice;

    for (int i = 0; i < 5; i++) {

        cout << "Please enter your weight: ";
        cin >> weight;

        cout << "Is your weight in (L)bs or (K)gs: ";
        cin >> weight_choice;

        if (weight_choice == "L") {
            weight = weight * 0.45359237;
            cout << "Your weight is: " << weight << " kg" << endl;
        }
        else if (weight_choice == "K") {
            weight = weight * 2.20462262;
            cout << "Your weight is: " << weight << " lbs" << endl;
        }
        else {
            cout << "Your choice was not accepted" << endl;
        }
    }

    return 0;
}
