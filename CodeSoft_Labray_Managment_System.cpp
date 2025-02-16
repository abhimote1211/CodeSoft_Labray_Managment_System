#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct B 
{
    string title, author, isbn;
    bool available = true;
};

struct T 
{
    string borrower;
    string isbn;
};

vector<B> books;
vector<T> transactions;

void addBook() 
{
    B b;
    cout << "Enter title: ";
    cin.ignore();
    getline(cin, b.title);
    cout << "Enter author: ";
    getline(cin, b.author);
    cout << "Enter ISBN: ";
    getline(cin, b.isbn);
    books.push_back(b);
    cout << "Book added.\n";
}

void searchBook() 
{
    string query;
    cout << "Search by title, author, or ISBN: ";
    cin.ignore();
    getline(cin, query);

    for (const auto& b : books)
    {
        if (b.title == query || b.author == query || b.isbn == query) {
            cout << "Found: " << b.title << " by " << b.author << " (ISBN: " << b.isbn << ") "
                 << (b.available ? "Available" : "Not Available") << "\n";
            return;
        }
    }
    cout << "Not found.\n";
}

void checkoutBook() 
{
    string isbn, borrower;
    cout << "Enter ISBN: ";
    cin.ignore();
    getline(cin, isbn);

    auto it = find_if(books.begin(), books.end(), [&](const B& b) { return b.isbn == isbn && b.available; });
    if (it != books.end()) 
    {
        cout << "Enter borrower name: ";
        getline(cin, borrower);
        transactions.push_back({borrower, isbn});
        it->available = false;
        cout << "Checked out to " << borrower << ".\n";
    } else 
    {
        cout << "Not available or not found.\n";
    }
}

void returnBook() 
{
    string isbn;
    cout << "Enter ISBN: ";
    cin.ignore();
    getline(cin, isbn);

    auto it = find_if(books.begin(), books.end(), [&](const B& b) { return b.isbn == isbn && !b.available; });
    if (it != books.end()) 
    {
        it->available = true;
        cout << "Book returned.\n";
        transactions.erase(remove_if(transactions.begin(), transactions.end(),[&](const T& t) { return t.isbn == isbn; }), transactions.end());
    } else 
    {
        cout << "Not found or already returned.\n";
    }
}

int main() 
{
    int choice;
    cout<<"********************************************************"<<endl;
    cout<<"******** LIBRAY MANAGMENT SYSTEM BY ABHISHEK ***********"<<endl;
    cout<<"********************************************************\n"<<endl;
    while (true) 
    {
        cout << "\n1. Add Book\n2. Search Book\n3. Checkout Book\n4. Return Book\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1: addBook(); break;
            case 2: searchBook(); break;
            case 3: checkoutBook(); break;
            case 4: returnBook(); break;
            case 5: return 0;
            default: cout << "Invalid choice. Please enter a number between 1 and 5.\n";
        }
    }
}
