#include <iostream>

int main() {

    double temp;
    char unitfrom;
    char unitto;

    std::cout << "C = Celsius, F = Fahrenheit, K = Kelvin \n";

    std::cout << "Enter the unit you want to convert from: ";
    std::cin >> unitfrom;

    std::cout << "Enter the unit you want to convert to: ";
    std::cin >> unitto;

    if(unitfrom == 'C' || unitfrom == 'c'){ // FROM CELSIUS
        if(unitto == 'F' || unitto == 'f'){
            std::cout << "Enter the temperature value: ";
            std::cin >> temp;
            std::cout << (temp*(9.0/5.0)+32);
        } else if (unitto == 'K' || unitto == 'k'){
            std::cout << "Enter the temperature value: ";
            std::cin >> temp;
            std::cout << temp+273.15;
        } else {
            std::cout << "Something went wrong";
        }
    } else if (unitfrom == 'F' || unitfrom == 'f'){ // FROM FAHRENHEIT
        if(unitto == 'C' || unitto == 'c'){
            std::cout << "Enter the temperature value: ";
            std::cin >> temp;
            std::cout << ((temp-32)*(5.0/9.0));
        } else if (unitto == 'K' || unitto == 'k'){
            std::cout << "Enter the temperature value: ";
            std::cin >> temp;
            std::cout << (temp-32)*(5.0/9.0)+273.15;
        } else {
            std::cout << "Something went wrong";
        }
    } else if (unitfrom == 'K' || unitfrom == 'k'){ // FROM KELVIN
        if(unitto == 'C' || unitto == 'c'){
            std::cout << "Enter the temperature value: ";
            std::cin >> temp;
            std::cout << temp-273.15;
        } else if (unitto == 'F' || unitto == 'f'){
            std::cout << "Enter the temperature value: ";
            std::cin >> temp;
            std::cout << (temp-273.15)*(9.0/5.0)+32;
        } else {
            std::cout << "Something went wrong";
        }
    } else {
        std::cout << "Something went wrong";
    }

    return 0;
}