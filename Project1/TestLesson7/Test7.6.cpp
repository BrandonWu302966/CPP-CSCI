#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float total = 0;
    int count = 0;
    float avg = 0;
    float values[] = { 32, 54, 67.5, 29, 35, 80, 115, 44.5, 100, 65 };
    float* p = values;
    float* q = new float[20];
    cout << "here is the original array ------" << endl;
    for (int i = 0; i < 10; i++)
    {
        total = total + *(p + i);
        ++count;
        cout << "values[ " << i << " ] = " << *(p+i) << endl;
    }
    cout << "Here is the new array ------" << endl;

    for (int i = 0; i < 10; ++i)
    {
        *(q + i) = *(p + i);
        cout << "new_values[ " << i << " ] = " << *(q + i) << endl;
    }
     cout << "Total = " << total << endl;
     avg = total / count;
     cout << "Average = " << avg << endl;
     return 0;
}