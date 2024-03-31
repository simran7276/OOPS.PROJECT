#include <iostream>
using namespace std;

int maximum(int *a, int *b, int *c) {
    int max = *a;

    if (*b > max)
        max = *b;
    if (*c > max)
        max = *c;

    return max;
}

int main() {
    int num1, num2, num3;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    int maxNum = maximum(&num1, &num2, &num3);

    cout << "Maximum number among the three integers is: " << maxNum << endl;

    return 0;
}