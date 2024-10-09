#include "PPP.h"

// Create a calculator with error handling and menu selection

void DisplayMenu() {
    cout << "Welcome to my C++ Calculator!\n\n" <<
        "Please make a selection:\n" <<
        "1. Addition\n" <<
        "2. Subtraction\n" <<
        "3. Multiplication\n" <<
        "4. Division\n\n" <<
        "Or press the '|' key to exit the program.\n";
}


int main()
{
    bool keepRunning = true;
    while (keepRunning) {
        try {

        }

        catch (exception& e) {
            cerr << "Error occurred: " << e.what() << '\n';
            return 1;
        }

        catch (...) {
            cerr << "Unknown error occurred.\n";
            return 2;
        }
    }
    
}

