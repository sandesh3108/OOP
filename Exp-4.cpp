#include <iostream>
#include <string>
using namespace std;

struct Product 
{
    string name;
    double price;
    Product* next;
};

class LinkedList 
{
private:
    Product* head; 

public:
    LinkedList() : head(NULL) {} 

    void insertProduct(string name, double price) 
    {
        Product* newProduct = new Product;
        newProduct->name = name;
        newProduct->price = price;
        newProduct->next = NULL;

        if (head == NULL) 
        {
            head = newProduct;
        } 
		else 
        {
            Product* temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newProduct;
        }
    }

    void printList() 
    {
        int i=1;
        Product* temp = head;
        while (temp != NULL) 
        {
            cout <<"\n"<<i<<"]Product Name: " << temp->name << "\n Price: " << temp->price <<"\n"<< endl;
            temp = temp->next;
            i++;
        }
    }

   
    void deleteProduct(int position) 
    {
        if (head == NULL) 
        {
            cout << "List is empty." << endl;
            return;
        }

        Product* temp = head;
        if (position == 1) 
        {
            head = temp->next;
            delete temp;
            return;
        }

        for (int i=1;temp!=NULL && i<position-1;i++) 
        {
            temp=temp->next;
        }

        if (temp==NULL || temp->next==NULL) 
        {
            cout << "Position out of range." << endl;
            return;
        }

        Product* next = temp->next->next;
        delete temp->next;
        temp->next = next;
    }
};

int main() 
{
    LinkedList list;
    string productName;
    double productPrice;
    int choice;

    do 
    {
        cout << "\n1]Add Product\n2]Print Products\n3]Delete Product\n4]Exit\nEnter your choice:- ";
        cin >> choice;

        switch (choice) 
        {
            case 1:
                cout << "\nEnter product name: ";
                cin.ignore(); 
                getline(cin, productName);
                cout << "Enter product price: ";
                cin >> productPrice;
                list.insertProduct(productName, productPrice);
                break;
            case 2:
                list.printList();
                break;
            case 3:
                int position;
                cout << "\nEnter the position of the product to delete: ";
                cin >> position;
                list.deleteProduct(position);
                break;
            case 4:
                cout << "\nExiting...\n";
                break;
            default:
                cout << "\nInvalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

