/*
Name: Tyler Zhang
Program Name: Vectors Lab 2
Date: 1/27/25
Extra: Sorting a vector
*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<string> languages = {"Mandarin", "English", "Spanish"};
    char resp;
    string lang;
    int pos;
    do {
        cout << "What would you like to do?" << endl;
        cout << "A) Print all languages\nB) Insert an element\nC) Remove an element\nD) Sort the languages" << endl;
        cin >> resp;
        switch (resp) {
            case 'A': {
                for (auto it = languages.begin(); it != languages.end(); it++) {
                    cout << *it << " ";
                }
                cout << "\n";
                break;
            }
            case 'B': {
                cout << "What language would you like to insert?" << endl;
                cin >> lang;
                cout << "What position would you like to insert it at?" << endl;
                cin >> pos;
                languages.insert(languages.begin() + pos, lang);
                break;
            }
            case 'C': {
                cout << "What position would you like to remove?" << endl;
                cin >> pos;
                languages.erase(languages.begin() + pos);
                break;
            }
            case 'D': {
                sort(languages.begin(), languages.end());
                break;
            }
            default: {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    } while
}