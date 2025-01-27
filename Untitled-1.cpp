/*
Name: Tyler Zhang
Program Name: Vectors Lab 2
Date: 1/27/25
Extra: Sorting a vector
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<string> languages = {"Mandarin", "English", "Spanish"};
    char resp;
    string lang;
    int pos;
    bool run = true;
    do {
        cout << "What would you like to do?" << endl;
        cout << "A) Print all languages\nB) Insert an element\nC) Remove an element\nD) Sort the languages\nE) Leave" << endl;
        cin >> resp;
        switch (resp) {
            case 'A': {
                // uses iterators to go through the languages vector and prints out the element at the pointer
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
                // inserts the element at the user's position in the vector
                languages.insert(languages.begin() + pos, lang);
                break;
            }
            case 'C': {
                cout << "What position would you like to remove?" << endl;
                cin >> pos;
                // removes the element at the user's wanted position
                languages.erase(languages.begin() + pos);
                break;
            }
            case 'D': {
                // uses std::sort method to sort the vector
                sort(languages.begin(), languages.end());
                break;
            }
            case 'E': {
                // ends the loop
                run = false;
                break;
            }
            default: {
                // error trap if they don't enter a valid option
                cout << "Invalid choice" << endl;
                break;
            }
        }
    } while (run);
}
