#include <iostream>
#include <string>
// #include<--file name-->

using namespace std;

class Cart
{
private:
    string category;
    int quantity;
    double totalPrice;

public:
    Cart() : category(""), quantity(0), totalPrice(0.0) {}

    void chooseCategory()
    {
        cout << "Choose a category (1, 2, or 3): ";
        cin >> category;
    }

    void enterQuantity()
    {
        cout << "Enter quantity: ";
        cin >> quantity;
    }

    void calculateTotalPrice()
    {
        double pricePerUnit;
        double x = -- --;
        double y = -- --;
        double z = -- --;

        if (category == "1")
        {
            pricePerUnit = x;
        }
        else if (category == "2")
        {
            pricePerUnit = y;
        }
        else if (category == "3")
        {
            pricePerUnit = z;
        }
        else
        {
            cout << "Invalid category selection." << endl;
            return;
        }

        totalPrice = quantity * pricePerUnit;
    }

    void displayTotalPrice()
    {
        cout << "Total price: $" << totalPrice << endl;
    }
};

int main()
{
    Cart myCart;

    myCart.chooseCategory();
    myCart.enterQuantity();
    myCart.calculateTotalPrice();
    myCart.displayTotalPrice();
    return 0;
}
