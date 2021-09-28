#include <iostream>
#include <assert.h>//проверка на правильность

#include <purchase.h>

int main() {
    std::cout << "start testing" << std::endl;

    PurchaseObject first_purchase; //конструктор по умолчанию проверка
    assert(first_purchase.GetTime() == 0.0); //
    assert(first_purchase.GetSum() == 0.0);
    std::cout << "default constructor" << std::endl; //успешное завершение проверки

    PurchaseObject second_purchase(1234.5, 2000.0); //конструктор инициализации
    assert(second_purchase.GetTime() == 1234.5);
    assert(second_purchase.GetSum() == 2000.0);
    std::cout << "initialisation constructor" << std::endl; //успешное завершение проверки

    PurchaseObject third_purchase(second_purchase); //конструктор копирования, копируем данные второй покупки в третью
    assert(third_purchase.GetTime() == second_purchase.GetTime());
    assert(third_purchase.GetSum() == second_purchase.GetSum());
    std::cout << "copy constructor" << std::endl; //успешное завершение проверки

    third_purchase.SetTime(98765.4); //данные 2 и 3 покупок не связаны
    assert(third_purchase.GetTime() == 98765.4);
    third_purchase.SetSum(400.94); //устанавливаем в третью покупку новые данные
    assert(third_purchase.GetSum() == 400.94);
    std::cout << "getter and setter test" << std::endl; //успешное завершение проверки

    assert(third_purchase.GetTime() != second_purchase.GetTime()); //независимость после конструктора копирования
    assert(third_purchase.GetSum() != second_purchase.GetSum());
    std::cout << "independence after copy constructor" << std::endl;

    std::cout << "finish - all is ok" << std::endl;
    return 0;
}
