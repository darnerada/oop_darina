#include <purchase.h>

PurchaseObject::PurchaseObject(): time_(0.0), sum_(0.0) {} //импорт структуры, установка значений по умолчанию

PurchaseObject::PurchaseObject(const double time, const double sum) {
    SetTime(time);
    SetSum(sum);
} //конструктор инициализации, передаем время и сумму покупки и устанавливаем значения в классе

double PurchaseObject::GetTime() const {
    return time_;
} //обращаемся к приватной переменной

void PurchaseObject::SetTime(const double time) {
    if (time < 0.0) { //проверка на правильность введенных данных
        time_ = 0.0;
        return;
    }

    time_ = time; //если данные верны, то устанавливаем значение
}

double PurchaseObject::GetSum() const {
    return sum_;
}

void PurchaseObject::SetSum(double sum) {
    if (sum < 0.0) {
        sum_ = 0.0;
        return;
    }

    sum_ = sum;
}