#include <iostream>
#include <string>

int main() {
    std::cout << "Welcome to My USSD App\n";
    std::cout << "Enter USSD code: ";

    std::string ussdCode;
    std::getline(std::cin, ussdCode);

    while (ussdCode != "exit") {
        std::string response;

        // Handle USSD codes
        if (ussdCode == "*124#") {
            response = "Your balance is $100";
        } else if (ussdCode == "*456#") {
            response = "Welcome to Data Plan Menu\n1. Activate 1GB\n2. Activate 5GB";
        } else if (ussdCode == "1") {
            response = "1GB data plan activated!";
        } else if (ussdCode == "2") {
            response = "5GB data plan activated!";
        } else {
            response = "Invalid USSD code.";
        }

        std::cout << "USSD Response:\n" << response << "\n";

        std::cout << "Enter USSD code: ";
        std::getline(std::cin, ussdCode);
    }

    std::cout << "Goodbye!\n";

    return 0;
}

