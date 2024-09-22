#include "PPP.h"

double ctok(double c) {
    int k = c + 273.25;
    return k;
}

int main()
{
    double c = 0;
    cin >> c;
    if (c < -273.15)
        error("Temperature is below absolute zero.\n");
    double k = ctok(c);
    cout << k << '\n';
}

