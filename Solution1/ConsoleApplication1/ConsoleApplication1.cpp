/*
* Требования к программному коду:
* 1. Головин Денис и Морозов Евгений    
* 2. П3Э    2022
* 3. Версия языка C++ - 20
* 4. Версия языка C - 18
*/

#include <iostream>
#include <cmath>
#include <numeric> // https://en.cppreference.com/w/cpp/numeric
#include "uih.h"
#include "YMN.h"
#include "DEL.h"
#include "SQRT.h"
#include "POW.h"
#include "Cos.h"

int main()
{
    setlocale(LC_ALL, "Ru-ru");

    std::cout << "28 декабря 2022\n" << std::endl;

    short int numberA = -100;
    unsigned short int numberB = 100;
    int numberC = -350;
    unsigned int numberD = 760;
    long numberE = -870;
    unsigned long numberF = 4;
    long long numberG = 7;

    int numberLE = 9;

    int numberLY = 3;

    float numberX = -10.99;
    double numberY = 0.00599;
    long double numberZ = 30.9999999;

    long double resultOfuih = numberuih(numberA, numberB, numberC, numberD);
    std::cout << "Результат сложения чисел = " << resultOfuih << std::endl;

    long double resultOfDEL = numberDEL(numberA, numberB, numberC, numberD);
    std::cout << "Результат деления чисел = " << resultOfDEL << std::endl;

    long double resultOfYMN = numberYMN(numberA, numberB, numberC, numberD);
    std::cout << "Результат умножения чисел = " << resultOfYMN << std::endl;

    long double resultOfSQRT = numberSQRT(numberA);
    std::cout << "Результат возведения чисел в квадрат = " << resultOfSQRT << std::endl;

    const long double resultOfPOW = numberPOW(numberF, numberG);
    std::cout << "Результат возведения чисел в 7 степень = " << resultOfPOW << std::endl;

    long double resultOfCos = numberCos(numberLE);
    std::cout << "Результат числа = " << resultOfCos << std::endl;

    long double varA = 1.00201;
    long double &varA1 = varA;

    constexpr int varB = 1 + 2;

    std::cout << "varA " << varA1 << std::endl;
    std::cout << "varB " << varB << std::endl;
    std::cout << std::endl;
    std::cout << "Вычисления закончены!" << std::endl;
    std::cout << std::endl;

    system("pause");
}