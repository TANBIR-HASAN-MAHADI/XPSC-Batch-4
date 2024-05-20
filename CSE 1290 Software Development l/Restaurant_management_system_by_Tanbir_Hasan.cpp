#include <bits/stdc++.h>
using namespace std;

class Restaurant
{
private:
    int quantity[12] = {0};                                                     // Array to store quantities of each item ordered
    int prices[12] = {449, 399, 449, 339, 379, 435, 395, 375, 410, 50, 40, 20}; // Prices of each item

    // Function to process order
    void processOrder(int choice)
    {
        int index = choice - 1; // Adjusting index as array starts from 0
        int qty;
        cout << "Enter how many you want: ";
        cin >> qty;

        if (qty <= 0)
        {
            cout << "Invalid quantity! Please enter a positive number." << endl;
            return;
        }

        quantity[index] += qty;
        cout << "Your order has been added successfully!" << endl;
        // system("cls");
        // displayMenu();
    }

    // Function to cancel order
    void cancelOrder()
    {
        int choice;
        cout << "Enter the item number you want to cancel: ";
        cin >> choice;

        if (choice < 1 || choice > 12)
        {
            cout << "Invalid choice! Please enter a valid item number." << endl;
            return;
        }

        int index = choice - 1; // Adjusting index as array starts from 0
        int qty;
        cout << "Enter how many you want to cancel: ";
        cin >> qty;

        if (qty < 0)
        {
            cout << "Invalid quantity! Please enter a valid quantity." << endl;
            return;
        }

        if (qty > quantity[index])
        {
            cout << "You didn't order that many" << endl;
            return;
        }

        quantity[index] -= qty;
        cout << "Your order has been canceled successfully!" << endl;
    }

    // Function to show order details
    void showOrderDetails()
    {
        cout << "====================== Order Details ======================" << endl;
        int total = 0;
        for (int i = 0; i < 12; ++i)
        {
            if (quantity[i] > 0)
            {
                string itemName;
                switch (i + 1)
                {
                case 1:
                    itemName = "Double Burger";
                    break;
                case 2:
                    itemName = "Texas BBQ Burger";
                    break;
                case 3:
                    itemName = "Classic Burger";
                    break;
                case 4:
                    itemName = "Spicy Burger";
                    break;
                case 5:
                    itemName = "Spicy Burger with Cheese";
                    break;
                case 6:
                    itemName = "Mac and Cheese Pizza";
                    break;
                case 7:
                    itemName = "Cheese Cocktail Pizza";
                    break;
                case 8:
                    itemName = "Cheese Fountain Pizza";
                    break;
                case 9:
                    itemName = "BBQ Meat Machine Pizza";
                    break;
                case 10:
                    itemName = "Pepsi";
                    break;
                case 11:
                    itemName = "7 UP";
                    break;
                case 12:
                    itemName = "Water";
                    break;
                }
                cout << (i + 1) << ". " << itemName << " X " << quantity[i] << " = " << quantity[i] * prices[i] << " Taka" << endl;
                total += quantity[i] * prices[i];
            }
        }
        cout << "Total amount = " << total << " Taka" << endl;
        cout << "============================================================" << endl
             << endl;
    }

    // Function to make payment
    void makePayment(int total)
    {
        cout << "~:After Payment You Can't Cancel Your Order:~" << endl;
        cout << "1.Continue parches" << endl;
        cout << "2.Cancel Order" << endl;
        cout << "3.Payment" << endl;
        int choice;
        cout << "\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            user();
            break;
        case 2:
            cancelOrder();
            break;
        case 3:
            cout << "1.Card." << endl;
            cout << "2.Mobile Banking(Only Bkash)." << endl;
            cout << "Enter How Do You Like To Pay: ";

            int pay;
            cin >> pay;
            switch (pay)
            {
            case 1:
                while (true)
                {
                    cout << "Enter Account Number: ";
                    string accNumber, pass;
                    cin >> accNumber;
                    cout << "Enter Password: ";
                    cin >> pass;
                    if (accNumber.size() != 16 || pass.size() != 4)
                    {
                        cout << "Invalid Account Number Or PIN!" << endl;
                        continue;
                    }
                    else
                    {
                        // Process payment
                        cout << "Payment Successful!" << endl;
                        break;
                    }
                }
                break;
            case 2:
                while (true)
                {
                    cout << "Enter Mobile Number: ";
                    string mbNumber, pass;
                    cin >> mbNumber;
                    cout << "Enter PIN: ";
                    cin >> pass;
                    if (mbNumber.size() != 11 || pass.size() != 4)
                    {
                        cout << "Invalid Mobile Number Or PIN!" << endl;
                        continue;
                    }
                    else
                    {
                        // Process payment
                        cout << "Payment Successful!" << endl;
                        break;
                    }
                }
                break;
            default:
                cout << "Invalid Choice!!" << endl;
                makePayment(total);
                break;
            }

            // Option to continue or exit
            char cont;
            cout << "Do you want to continue? (Y/N): ";
            cin >> cont;
            if (cont == 'Y' || cont == 'y')
            {
                user();
            }
            else
            {
                exit(0);
            }
            break;
        default:
            break;
        }
    }

public:
    // Function to display menu
    void displayMenu()
    {
        cout << "=========================================================================" << endl;
        cout << "-------------------------------------------------------------------------" << endl;
        cout << "************************   TASTE OF TRADITION    ************************" << endl;
        cout << "-------------------------------------------------------------------------" << endl;
        cout << "=========================================================================" << endl
             << endl;
        cout << "\t\t\t   Restaurant Menu" << endl;
        cout << "\tBURGER" << endl;
        cout << "1.Double Burger           : 449 Taka" << endl;
        cout << "2.Texas BBQ Burger        : 399 Taka" << endl;
        cout << "3.Classic Burger          : 449 Taka" << endl;
        cout << "4.Spicy Burger            : 339 Taka" << endl;
        cout << "5.Spicy Burger with Cheese: 379 Taka" << endl
             << endl;
        cout << "\tPIZZA (Only Medium)" << endl;
        cout << "6.Mac and Cheese Pizza    : 435 Taka" << endl;
        cout << "7.Cheese Cocktail Pizza   : 395 Taka" << endl;
        cout << "8.Cheese Fountain Pizza   : 375 Taka" << endl;
        cout << "9.BBQ Meat Machine Pizza  : 410 Taka" << endl
             << endl;
        cout << "\tDRINKS" << endl;
        cout << "10.Pepsi                  : 50 Taka" << endl;
        cout << "11.7 UP                   : 40 Taka" << endl;
        cout << "12.Water                  : 20 Taka" << endl
             << endl;
        cout << "\tDETAILS & PAYMENT" << endl;
        cout << "13.For Cancel your individual Order." << endl;
        cout << "14.See Your Order Details." << endl;
        cout << "15.Make Payment." << endl;
    }

    // Function to interact with user
    void user()
    {
        while (true)
        {
            // Display menu
            displayMenu();

            // Get user's choice
            int choice;
            cout << "\nEnter your choice : ";
            cin >> choice;

            switch (choice)
            {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                processOrder(choice);
                break;
            case 13:
                cancelOrder();
                break;
            case 14:
                showOrderDetails();
                break;
            case 15:
                makePayment(calculateTotalAmount());
                return;
            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
            }
        }
    }

    // Function to calculate total amount
    int calculateTotalAmount()
    {
        int total = 0;
        for (int i = 0; i < 12; ++i)
        {
            total += quantity[i] * prices[i];
        }
        return total;
    }
};

int main()
{
    Restaurant restaurant;
    restaurant.user();
    return 0;
}
