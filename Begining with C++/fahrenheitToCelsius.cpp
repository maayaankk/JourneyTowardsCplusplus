// C = [(°F-32)×5]/9

#include <iostream>
using namespace std;

int main()
{
    int celsius;
    int fahrenheit;

    cin >> fahrenheit;

    int temp = fahrenheit - 32;

    celsius = temp * 5 / 9;

    cout << "Temperature in Celcius is: " << celsius << "\n";

    return 0;
}