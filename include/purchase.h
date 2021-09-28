#ifndef OOP_DARINA_PURCHASE_H
#define OOP_DARINA_PURCHASE_H

class PurchaseObject {
public:
    PurchaseObject(); //инициализация пустого класса, конструктор по умолчанию
    PurchaseObject(double time, double sum); // конструктор инициализации, передача нужных данных
    PurchaseObject(const PurchaseObject& other) = default; // конструктор копирования, данные копируются с введенного класса

    double GetTime() const; // функция выдачи времени, тк к приватным переменных обращаться не можем, но в случае чего запрос данные
    void SetTime(double time); // const -эффективность, double дробные, функция меняет приватную переменную

    double GetSum() const; //тоже самое
    void SetSum(double sum);

    ~PurchaseObject() = default; //деструктор по умолчанию очищает память
private:
    double time_; //не видно без доступа к классу
    double sum_;
};

#endif //OOP_DARINA_PURCHASE_H
