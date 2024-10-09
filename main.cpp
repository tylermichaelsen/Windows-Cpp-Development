#include "PPP.h"

// Create a calculator with error handling and menu selection

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

