#include <iostream>
#include <string>
#include "notepad.h"

using namespace std;

int main()
{
    int choice;
    string filename;

    do
    {
        cout << "\n===== SIMPLE NOTEPAD =====" << endl;
        cout << "1. Write File" << endl;
        cout << "2. Read File" << endl;
        cout << "3. Append File" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        cin.ignore(); // clears newline from buffer

        switch(choice)
        {
            case 1:
                cout << "Enter filename: ";
                getline(cin, filename);
                writeFile(filename);
                break;

            case 2:
                cout << "Enter filename: ";
                getline(cin, filename);
                readFile(filename);
                break;

            case 3:
                cout << "Enter filename: ";
                getline(cin, filename);
                appendFile(filename);
                break;

            case 4:
                cout << "Exiting program..." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while(choice != 4);

    return 0;
}
