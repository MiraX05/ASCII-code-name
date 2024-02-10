#include <iostream>

int main() {

    std::string name = "amir abbas darvish nezhad";


    for (char character : name) {
        std::cout << "___" << character << "__:" << static_cast<int>(character) << std::endl;
    }

    return 0;
}
