#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Product {
    int id;
    string name;
    double price;
    int stock;
};

struct Customer {
    int id;
    string name;
    vector<int> purchasedProductIds;
};

vector<Product> products;
vector<Customer> customers;

void addProduct() {
    Product p;
    cout << "Enter Product ID: ";
    cin >> p.id;
    cout << "Enter Product Name: ";
    cin.ignore();
    getline(cin, p.name);
    cout << "Enter Product Price: ";
    cin >> p.price;
    cout << "Enter Product Stock: ";
    cin >> p.stock;
    products.push_back(p);
    cout << "Product added!\n";
}

void listProducts() {
    cout << "\nProduct List:\n";
    for (const Product& p : products) {
        cout << "ID: " << p.id << ", Name: " << p.name << ", Price: " << p.price << ", Stock: " << p.stock << endl;
    }
}

void addCustomer() {
    Customer c;
    cout << "Enter Customer ID: ";
    cin >> c.id;
    cout << "Enter Customer Name: ";
    cin.ignore();
    getline(cin, c.name);
    customers.push_back(c);
    cout << "Customer added!\n";
}

void menu() {
    cout << "\n--- Super Shop Menu ---\n";
    cout << "1. Add Product\n";
    cout << "2. List Products\n";
    cout << "3. Add Customer\n";
}

int main() {
    int choice;
    do {
        menu();
        cin >> choice;

        if (choice == 1) addProduct();
        else if (choice == 2) listProducts();
        else if (choice == 3) addCustomer();

    } while (choice != 0);

    return 0;
}


