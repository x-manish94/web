#include <iostream>
using namespace std;

int main() {
    int A, B, C, largest;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> A >> B >> C;

    // Using nested ternary operator to find the largest
    largest = (A > B) ? ((A > C) ? A : C) : ((B > C) ? B : C);

    // Display the result
    cout << "The largest number is: " << largest << endl;

    return 0;
}
