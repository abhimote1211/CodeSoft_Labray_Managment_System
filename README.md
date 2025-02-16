
# CodeSoft ( C++ Internship ) TASK 5 - Library Management System

This is a simple **Library Management System** written in C++ as part of the **CodeSoft C++ Internship Task 5**. The program allows users to add books, search for books, check out books, and return books.

## Features
- **Add Books**: Users can add books by entering their title, author, and ISBN.
- **Search Books**: Users can search for books by title, author, or ISBN.
- **Checkout Books**: Borrowers can check out available books using the ISBN.
- **Return Books**: Borrowed books can be returned to make them available again.

## Technologies Used
- **C++** (Standard Library)
- **STL Containers** (Vectors)
- **Algorithms** (for searching and removing elements)

## Installation and Usage
1. Clone the repository:
   ```sh
   git clone https://github.com/abhimote1211/CodeSoft_Labray_Managment_System.cpp.git
   ```
2. Navigate to the project directory:
   ```sh
   cd CodeSoft_Labray_Managment_System
   ```
3. Compile the program using a C++ compiler (g++ recommended):
   ```sh
   g++ CodeSoft_Labray_Managment_System.cpp -o CodeSoft_Labray_Managment_System
   ```
4. Run the executable:
   ```sh
   ./CodeSoft_Labray_Managment_System
   ```

## Program Flow
1. The program starts with a menu:
   ```cpp
   ********************************************************
   ******** LIBRARY MANAGEMENT SYSTEM BY ABHISHEK *********
   ********************************************************

   1. Add Book
   2. Search Book
   3. Checkout Book
   4. Return Book
   5. Exit
   Enter your choice: 
   ```
2. Users select an option and follow prompts to perform actions.
3. The program runs in a loop until the user chooses to exit.

## Example Usage
```sh
Enter your choice: 1
Enter title: AGNIPANKH
Enter author: Dr. Abdul Kalam
Enter ISBN: 123
Book added.
```
```sh
Enter your choice: 2
Search by title, author, or ISBN: AGNIPANKH
Found: AGNIPANKH by Dr. Abdul Kalam (ISBN: 123) Available
```
```sh
Enter your choice: 3
Enter ISBN: 123
Enter borrower name: Abhi Mote
Checked out to Abhi Mote.
```
```sh
Enter your choice: 4
Enter ISBN: 123
Book returned.
```

## Contributing
Contributions are welcome! Feel free to fork the repository and submit pull requests.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Author
**Abhishek Mote**
