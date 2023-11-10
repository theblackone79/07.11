﻿

#include <iostream>
#include <string>
using namespace std;
bool ValidatePassword(const string& password)
{

    if (password.length() < 8) {
        return false;
    }

    for (char c : password)
    {
        if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
            (c == ':' || c == '!' || c == '@' || c == '#' || c == '$' ||
                c == '%' || c == '&' || c == '*' || c == '+' || c == '?'))) {
            return false;
        }
    }

    return true;
}



int main() 
{
    using namespace std;
    setlocale(0, "");
    string password;
    cout << "Введите пароль: ";
    cin >> password;

    if (ValidatePassword(password)) {
        cout << "Пароль допустим." << endl;
    }
    else {
        cout << "Пароль недопустим." << endl;
    }

    return 0;
}
