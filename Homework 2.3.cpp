#include <iostream>

struct address {
        std::string city = "Пусто";
        std::string street = "Пусто";
        int home = 0;
        int apartment = 0;
        int index = 0;
};

void print_address(address* a);

int main()
{
    setlocale(LC_ALL, "Russian");
    address first = { "Москва", "Арбат", 12, 8, 123456 };
    print_address(&first);
    address second = { "Ижевск", "Пушкина", 59, 143, 953769 };
    print_address(&second);
}

void print_address(address* a) {
    std::cout << "Город: " << a->city << std::endl;
    std::cout << "Улица : " << a->street << std::endl;
    std::cout << "Номер дома : " << a->home << std::endl;
    std::cout << "Номер квартиры : " << a->apartment << std::endl;
    std::cout << "Индекс : " << a->index << std::endl;
    std::cout << "\n" << std::endl;
}
