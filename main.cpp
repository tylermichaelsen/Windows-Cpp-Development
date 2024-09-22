#include "PPP.h"

double ctok(double c) {
    int k = c + 273.25;
    return k;
}

int main()
{
    try {
        double c = 0;
        cin >> c;
        if (c < -273.15)
            error("Temperature is below absolute zero.\n");
        double k = ctok(c);
        cout << k << '\n';
    }

    catch (exception& e) {
        cerr << "error: " << e.what() << '\n';
        return 1;
    }

    catch (...) {
        cerr << "Unexpected error occurred.\n";
        return 2;
    }
     
}

