#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float input;
    const int CAPACITY = 100;
    int current_size = 0;
    float values[CAPACITY];
    cout << "please enter a string of real numbers and enter q/Q to stop ";
    while (cin >> input)
    {
        values[current_size] = input;
        ++current_size;
    }
    for (int i = 0; i < current_size; ++i)
    {
        cout << "values [" << i << "] = " << values[i] << endl;
    }
    return 0;
}
