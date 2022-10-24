// nie starczylo mi czasu wiec zrobilem na klasie z pierwszego zadania
#include <iostream>
#include <string>

class milk {
    std::string name;
    float fat_percentage;
    std::string color;

public:

    milk()  {      
        std::string name = "Milk";
        fat_percentage = 0;
        std::string color = "White";
        std::cout << "Default";
    }

    milk(std::string name) {
        this->name = name;
        std::cout << "Poorly defined milk";
    }

    milk(std::string name, float fat_percentage) {
        this->name = name;
        this->fat_percentage = fat_percentage;
        std::cout << "Average defined milk";
    }
    milk(std::string name, float fat_percentage, std::string color) {
        this->name = name;
        this->fat_percentage = fat_percentage;
        this->color = color;
        std::cout << "Well defined milk";
    }

    void display()
    {
        std::cout << "\n" <<name << "\n" << fat_percentage << "\n" << color << "\n";
    }

    };

    int main()
    {
        milk* tasty_milk = new milk("milk_no_1", 5, "black");
        tasty_milk->display();
        
    }
