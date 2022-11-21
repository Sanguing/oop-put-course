#include <iostream>
#include <string>
using namespace std;

class toast {

private: 

    string shape;
    int cheese_slices_amount;
    string extras;

public:

    toast();
    toast(string shape_s, int cheese_slices_amount_s, string extras_s) : shape(shape_s), cheese_slices_amount(cheese_slices_amount_s), extras(extras_s)
    {
        cout << "Class toast has been created" << endl;
    }

    void display()
    {
        cout << shape << "\n" << cheese_slices_amount<< "\n" << extras << "\n";
        cout << endl << endl;
    }

    int extract_slices() {

        return cheese_slices_amount;
    }
};

toast::toast()
{
    cout << "Class default toast has been created" << endl;
    shape = "circle";
    cheese_slices_amount = 2;
    extras = "jalapena, salami, onion";
}

int main()
{
    toast toast_0;
    toast toast_1("rectangle", 5, "tomato");
    toast toast_2("square", 1, "garlic, onion");
    toast toast_3("trapezoid", 3, "paprica, mushrooms, honey");

    cout << endl << endl;

    toast_0.extract_slices();
    toast_1.extract_slices();
    toast_2.extract_slices();
    toast_3.extract_slices();

    toast_0.display();
    toast_1.display();
    toast_2.display();
    toast_3.display();

}
