#include <bits/stdc++.h>
using namespace std;

// Class to store book details
class Library
{
public:
    int id;                 // Unique Book ID
    char name[100];         // Book Name
    char author[100];       // Author Name
    char student[100];      // Student Name
    int price;              // Book Price
    int pages;              // Number of Pages
};

int main()
{
    Library lib[20];

    int input = 0;
    int count = 0;

    while (true)
    {
        cout << "\n=====================================\n";
        cout << "      LIBRARY MANAGEMENT SYSTEM\n";
        cout << "=====================================\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Exit\n";
        cout << "Enter your choice : ";
        cin >> input;

        switch (input)
        {

        // ================= Add Book =================
        case 1:

            // Check library capacity
            if (count >= 20)
            {
                cout << "\nLibrary storage is full.\n";
                break;
            }

            cout << "\nEnter Book ID (Positive Number): ";
            cin >> lib[count].id;

            if (lib[count].id <= 0)
            {
                cout << "Invalid Book ID!\n";
                break;
            }

            cout << "Enter Book Name : ";
            cin >> lib[count].name;

            cout << "Enter Author Name : ";
            cin >> lib[count].author;

            cout << "Enter Student Name : ";
            cin >> lib[count].student;

            cout << "Enter Book Price : ";
            cin >> lib[count].price;

            if (lib[count].price < 0)
            {
                cout << "Invalid Price!\n";
                break;
            }

            cout << "Enter Number of Pages : ";
            cin >> lib[count].pages;

            if (lib[count].pages <= 0)
            {
                cout << "Invalid Page Count!\n";
                break;
            }

            count++;

            cout << "\nBook added successfully.\n";

            break;

        // ================= Display Books =================
        case 2:

            if (count == 0)
            {
                cout << "\nNo books available in the library.\n";
                break;
            }

            cout << "\n========== LIBRARY RECORDS ==========\n";

            for (int i = 0; i < count; i++)
            {
                cout << "--------------------------------------\n";
                cout << "Book ID      : " << lib[i].id << endl;
                cout << "Book Name    : " << lib[i].name << endl;
                cout << "Author Name  : " << lib[i].author << endl;
                cout << "Student Name : " << lib[i].student << endl;
                cout << "Book Price   : " << lib[i].price << endl;
                cout << "Pages        : " << lib[i].pages << endl;
            }

            cout << "--------------------------------------\n";

            break;

        // ================= Exit =================
        case 3:

            cout << "\nThank you for using Library Management System.\n";
            cout << "Visit Again!\n";

            return 0;

        // ================= Invalid Choice =================
        default:

            cout << "\nInvalid Choice! Please try again.\n";
        }
    }
}