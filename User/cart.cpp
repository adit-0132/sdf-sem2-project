#include <iostream>
#include <string>

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

        if (category == "1")
        {
            pricePerUnit = 10.0;
        }
        else if (category == "2")
        {
            pricePerUnit = 20.0;
        }
        else if (category == "3")
        {
            pricePerUnit = 30.0;
        }
        else
        {
            cout << "Invalid category selection." << endl;
            return;
        }

        totalPrice = quantity * pricePerUnit;
    }

    void confirm()
    {
        int choice;
        cout << "Please confirm the given details:" << endl;
        cout << "Category: " << category << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Total Price: $" << totalPrice << endl;
        cout << "Press 1 to continue and 0 to edit: ";
        cin >> choice;

        if (choice == 0)
        {
            cout << "Enter new category and quantity: ";
            cin >> category >> quantity;
            calculateTotalPrice(); // Recalculate total price with new category and quantity
            displayTotalPrice();   // Display the updated total price
        }
        else if (choice == 1)
        {
            cout << "Order confirmed." << endl;
        }
        else
        {
            cout << "Invalid choice. Exiting..." << endl;
            exit(1);
        }
    }

    void displayTotalPrice()
    {
        cout << "Total price: ₹" << totalPrice << endl;
    }
};

int main()
{
    Cart myCart;

    myCart.chooseCategory();
    myCart.enterQuantity();
    myCart.calculateTotalPrice();
    myCart.confirm();

    return 0;
}
