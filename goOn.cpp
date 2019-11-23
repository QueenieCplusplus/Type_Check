//2019, 11/23, 11:30, by Queenie

#include <iostream>

bool goOn() {
        
    std:: cout << "Do You wanna go on? (y or n)\n"; // question isuued

    char answer = 0;
    std::cin >> answer;

    if (answer == 'y') return true;
    return false;

}

int main() {

    goOn();
    return 0;

}

