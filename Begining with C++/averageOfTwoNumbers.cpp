#include <iostream>
using namespace std;

int main()
{
    float num1, num2, sum, avg;

    cout << "Enter two number: \n";

    cin >> num1;

    cin >> num2;

    sum = num1 + num2;
    avg = sum / 2;

    cout << "Sum is: " << sum << "\n";

    cout << "Average of two numbers is: " << avg << "\n";

    return 0;
}