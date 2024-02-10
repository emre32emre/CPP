#include <iostream>


class Obje {
public:
    std::string _name;
    int _en;
    int *_boy;
    Obje(int en, int *boy, std::string name ){
        _en = en;
        _boy = boy;
        _name = name;
    }

    // Obje(const Obje &other){

    //     *this = other;
    // }

    // Obje& operator=(const Obje& other) {
    //     if (this != &other) { // Kendi kendine atanma kontrolü
    //         _en = other._en;
    //         int *f = new int(*other._boy);
    //         _boy = f;
    //         delete f;
    //         _name = other._name;
    //     }

    //     return *this;
    // }

};


int main()
{
    int b = 5;
    Obje obje1(3,&b,"kare");
    Obje obje2(obje1);
    std::cout << "" << std::endl;
    std::cout << "---------------->Önce obje1 en:3 boyu:5 obje2 copy constructor kullanılarak oluşturuldu." << std::endl;
    std::cout << "obje1 --> en:"<<  obje1._en << " || boy:" << *obje1._boy  << " || name:" << obje1._name << std::endl;
    std::cout << "adres obje1 --> class:"<< &obje1  << " en:"<<  &obje1._en << " || boy:" << &obje1._boy << " || name:" << obje1._name<< std::endl;

    std::cout << "obje2 --> en:"<<  obje2._en << " || boy:" << *obje2._boy  << " || name:" << obje2._name << std::endl;
    std::cout << "adres obje2 --> class:"<< &obje2  << " en:"<<  &obje2._en << " || boy:" << &obje2._boy << " || name:" << obje2._name<< std::endl;
    std::cout << std::endl;
    std::cout << "---------------->obje 1 eni ve boy değerleri değiştirildi." << std::endl;
    obje1._en = 10;
    *obje1._boy = 50;
    obje1._name = "Yuvarlak";
    std::cout << "obje1 --> en:"<<  obje1._en << " || boy:" << *obje1._boy  << " || name:" << obje1._name << std::endl;
    std::cout << "adres obje1 --> class:"<< &obje1  << " en:"<<  &obje1._en << " || boy:" << &obje1._boy << " || name:" << obje1._name<< std::endl;

    std::cout << "obje2 --> en:"<<  obje2._en << " || boy:" << *obje2._boy  << " || name:" << obje2._name << std::endl;
    std::cout << "adres obje2 --> class:"<< &obje2  << " en:"<<  &obje2._en << " || boy:" << &obje2._boy << " || name:" << obje2._name<< std::endl;
}