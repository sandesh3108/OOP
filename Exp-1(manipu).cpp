#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int number = 123;
    float positiveNumber = 456.78;
    float negativeNumber = -987.65;
    cout << "Right aligned: " << setw(10) << number << endl;
    cout << "Left aligned: " << left << setw(10) << number << endl;
    cout << "Showing sign of positive numbers: " << showpos << positiveNumber << endl;
    cout << "Inserting a newline character: " << positiveNumber << endl;
    cout << "Not showing sign of positive numbers: "<< noshowpos<<positiveNumber<< endl;
    
    return 0;
}
 
