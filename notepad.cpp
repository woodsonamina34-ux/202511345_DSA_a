#include "notepad.h"

using namespace std;

// Function to write to a file
void writeFile(string filename)
{
    ofstream file(filename.c_str());

    string text;

    if (!file)
    {
        cout << "Error creating file." << endl;
        return;
    }

    cout << "Enter text (type END to stop):" << endl;

    while (true)
    {
        getline(cin, text);

        if (text == "END")
        {
            break;
        }

        file << text << endl;
    }

    file.close();

    cout << "File saved successfully." << endl;
}

// Function to read a file
void readFile(string filename)
{
    ifstream file(filename.c_str());

    string line;

    if (!file)
    {
        cout << "File not found." << endl;
        return;
    }

    cout << "\n----- FILE CONTENT -----" << endl;

    while (getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}

// Function to append to a file
void appendFile(string filename)
{
    ofstream file(filename.c_str(), ios::app);

    string text;

    if (!file)
    {
        cout << "Error opening file." << endl;
        return;
    }

    cout << "Enter text to append (type END to stop):" << endl;

    while (true)
    {
        getline(cin, text);

        if (text == "END")
        {
            break;
        }

        file << text << endl;
    }

    file.close();

    cout << "Text appended successfully." << endl;
}
