#include <iostream>

/* Пассажиры оплачивают проезд при входе. Работать она должна примерно так:

Отправляемся с остановки «Улица программистов». В салоне пассажиров: 3

-----------Едем---------

Прибываем на остановку «Проспект алгоритмов». В салоне пассажиров: 3

…

…


Маршрут состоит из четырёх остановок. Напишите программу так, чтобы в конце она выводила, сколько денег мы заработали при условии, что билет стоит 20 руб., а расходы следующие:

четверть — на зарплату водителю;
пятая часть — на топливо;
пятая часть — на налоги;
пятая часть — на ремонт машины.
Формат вывода (после прибытия на последнюю остановку):

Всего заработали: 100 руб.

Зарплата водителя: 25 руб.

Расходы на топливо: 20 руб.

Налоги: 20 руб.

Расходы на ремонт машины: 20 руб.

Итого доход: 15 руб.

Рекомендации по выполнению
        В одной программе должен быть как ввод количества вошедших и вышедших пассажиров, так и расчёты доходов и расходов.
Стоит вынести названия остановок в переменные.
Постарайтесь написать программу так, чтобы в неё без особых изменений можно было добавить ещё несколько остановок.
Что оценивается
Правильность подсчёта текущего количества пассажиров.
Правильность подсчёта доходов и расходов.
Отсутствие лишних переменных.*/

int main() {
    std::cout << "Program <Minibus Simulator>" << std::endl;

    std::string nameStop1 = "Programmers Street";
    std::string nameStop2 = "Avenue of Algorithms";
    std::string nameStop3 = "Physicists Street";
    std::string nameStop4 = "Mathematicians Square";

    int passengersCabin = 0;
    int passengersLeft = 0;
    int passengersEntered = 0;

    std::cout << "We arrive at the " << nameStop1 << " stop. Passengers in the cabin: " << passengersCabin << std::endl;
    std::cout << "How many passengers got off at the stop? ";
    std::cin >> passengersLeft;
    std::cout << "How many passengers got on at the stop? ";
    std::cin >> passengersEntered;
    passengersCabin += (passengersEntered - passengersLeft);
    std::cout << "We depart from the " << nameStop1 << " stop. Passengers in the cabin: " << passengersCabin << std::endl;


}
