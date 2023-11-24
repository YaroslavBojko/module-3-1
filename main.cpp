#include <iostream>

int main() {
    std::cout << "Program <Minibus Simulator>" << std::endl;

    std::string nameStop1 = "Programmers Street";
    std::string nameStop2 = "Avenue of Algorithms";
    std::string nameStop3 = "Physicists Street";
    std::string nameStop4 = "Mathematicians Square";

    int passengersCabin = 0;
    int passengersLeft = 0;
    int passengersEntered = 0;
    int passengersNumber = 0;

    std::cout << "We arrive at the " << nameStop1 << " stop. Passengers in the cabin: " << passengersCabin << std::endl;
    std::cout << "How many passengers got off at the stop? ";
    std::cin >> passengersLeft;
    std::cout << "How many passengers got on at the stop? ";
    std::cin >> passengersEntered;
    passengersCabin += (passengersEntered - passengersLeft);
    passengersNumber += passengersEntered;
    std::cout << "We depart from the " << nameStop1 << " stop. Passengers in the cabin: " << passengersCabin << std::endl;
    std::cout << "-----------Let's go---------" << std::endl;

    std::cout << "We arrive at the " << nameStop2 << " stop. Passengers in the cabin: " << passengersCabin << std::endl;
    std::cout << "How many passengers got off at the stop? ";
    std::cin >> passengersLeft;
    std::cout << "How many passengers got on at the stop? ";
    std::cin >> passengersEntered;
    passengersCabin += (passengersEntered - passengersLeft);
    passengersNumber += passengersEntered;
    std::cout << "We depart from the " << nameStop2 << " stop. Passengers in the cabin: " << passengersCabin << std::endl;
    std::cout << "-----------Let's go---------" << std::endl;

    std::cout << "We arrive at the " << nameStop3 << " stop. Passengers in the cabin: " << passengersCabin << std::endl;
    std::cout << "How many passengers got off at the stop? ";
    std::cin >> passengersLeft;
    std::cout << "How many passengers got on at the stop? ";
    std::cin >> passengersEntered;
    passengersCabin += (passengersEntered - passengersLeft);
    passengersNumber += passengersEntered;
    std::cout << "We depart from the " << nameStop3 << " stop. Passengers in the cabin: " << passengersCabin << std::endl;
    std::cout << "-----------Let's go---------" << std::endl;

    std::cout << "We arrive at the " << nameStop4 << " stop. Passengers in the cabin: " << passengersCabin << std::endl;
    std::cout << "How many passengers got off at the stop? ";
    std::cin >> passengersLeft;
    std::cout << "How many passengers got on at the stop? ";
    std::cin >> passengersEntered;
    passengersCabin += (passengersEntered - passengersLeft);
    passengersNumber += passengersEntered;
    std::cout << "We depart from the " << nameStop4 << " stop. Passengers in the cabin: " << passengersCabin << std::endl;
    std::cout << "--------------------------" << std::endl;

    int ticketPrice = 20;
    int totalAmount = passengersNumber * ticketPrice;
    int driversSalary = totalAmount / 4;
    int fuel = totalAmount / 5;
    int taxes = totalAmount / 5;
    int carRepairs = totalAmount / 5;
    int income = totalAmount - (driversSalary + fuel + taxes + carRepairs);

    std::cout << "Total earned: " << totalAmount <<  " rubles." << std::endl;
    std::cout << "Driver's salary: " << driversSalary << " rubles." << std::endl;
    std::cout << "Fuel costs: " << fuel << " rubles." << std::endl;
    std::cout << "Taxes: " << taxes << " rubles." << std::endl;
    std::cout << "Costs for car repairs: " << carRepairs << " rubles." << std::endl;
    std::cout << "Total income: " << income << " rubles." << std::endl;

}
