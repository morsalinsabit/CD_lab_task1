#include <iostream>
using namespace std;

void numericConstant()
{
    string s;
    bool numeric = true;
    cout << "Enter input: ";
    cin >> s;

    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] < '0' || s[i] > '9')
        {
        numeric = false;
        break;
        }
    }
        if (numeric)
        cout << "Numeric Constant" << endl;
        else
        cout << "Not Numeric" << endl;}



void operators()
{
    string s;
    int count = 1;
    cout << "Enter input: ";
    cin >> s;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' ||s[i] == '/' || s[i] == '%' || s[i] == '=')
        {
            cout << "operator" << count << ": " << s[i] << endl;
            count++;
        }
    }
}



void commentLine()
{
    string s;
    cout << "Enter coment: ";
    cin.ignore();
    getline(cin, s);

    if (s[0] == '/' && s[1] == '/')
    {
        cout << "Single  Comment" << endl;
    }
    else if (s[0] == '/' && s[1] == '*')
    {
        bool comment = false;
        for (int i = 2; s[i] != '\0'; i++)
        {
            if (s[i] == '*' && s[i + 1] == '/')
            {
                comment = true;
                break;
            }
        }

        if (comment)
            cout << "Multiple Line Coment" << endl;
        else
            cout << "Not Comment" << endl;
    }
    else{
        cout << "Not Comment" << endl;
    }
}



void identifier()
{
    string s;
    bool valid = true;

    cout << "Enter identifier: ";
    cin >> s;
    if (!((s[0] >= 'A' && s[0] <= 'Z') ||(s[0] >= 'a' && s[0] <= 'z') ||s[0] == '_'))
    {
        valid = false;
    }
    for (int i = 1; s[i] != '\0'; i++)
    {
        if (!((s[i] >= 'A' && s[i] <= 'Z') ||(s[i] >= 'a' && s[i] <= 'z') ||(s[i] >= '0' && s[i] <= '9') ||s[i] == '_'))
        {
            valid = false;
            break;
        }
    }

    if (valid)
        cout << "Identifier" << endl;
    else
        cout << "Not Identifier" << endl;
}

int main()
{
    int choice;

    cout << " task1" << endl;
    cout << "task2" << endl;
    cout << "task3" << endl;
    cout << "task4" << endl;

    cout << "Enter trask: ";
    cin >> choice;

    if (choice == 1)
    {
        numericConstant();
    }
    else if (choice == 2)
    {
        operators();
    }
    else if (choice == 3)
    {
        commentLine();
    }
    else if (choice == 4)
    {
        identifier();
    }
    else
    {
        cout << "Invalid" << endl;
    }

    return 0;
}
