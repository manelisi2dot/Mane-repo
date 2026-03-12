#include <iostream>

int main(){
    int temp1,temp2,temp3,difference;// declaring variables

    // Input first temperature
    std::cout << "Enter the first temperature reading: ";
    std::cin >> temp1;

    // Input second temperature
    std::cout << "Enter the second temperature reading: ";
    std::cin >> temp2;

    // Calculate difference
    difference = temp2 - temp1;

    // Check temperature increase conditions
    if (difference > 50){
       std::cout << "Reduce fryer heat before taking the third reading" << endl;
    }
    else if (difference < 10){
        std::cout << "Increase the fryer heat before taking the third temperature reading" << endl;
    }

    // Input third temperature
    std::cout << "Enter the third temperature reading: ";
    std::cin >> temp3;

    // Check if oil is ready
    if (temp3 >= 150 && temp3 <= 190){
    std:: cout << "You may start frying the Magwinyas." << endl;
    }
    else {
       std::cout << "Oil is not ready for frying" << endl;
    }
    return 0;
}



