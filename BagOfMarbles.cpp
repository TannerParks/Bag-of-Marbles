#include <iostream>
#include <list>
#include <algorithm>    // To use std::find in the marble removal section

using namespace std;

// Warning: I'm very, very new at C++ so it's probably really messy down there
int main() {
    string marbles[] = {"green", "blue", "yellow"};   // List of marbles
    list<string> bag (marbles, marbles + sizeof(marbles) / sizeof(string) );   // Makes a list called bag that copies the marbles list
    list<string>::iterator l_iter;  // Iterator for the list

    int userInput;  // User input for menu
    string color;   // Color of the marble


    while (true){   // Loop so the user can add/remove marbles then see that change in the bag
        cout << "\n1 - Add Marble\n2 - Subtract Marble\n3 - Look at Bag\n4 - Quit\n";   // Menu options
        cin >> userInput;

        if (userInput == 1){    // Marble addition
            cout << "Enter a color from the list to add it to the bag of marbles.\nyellow\ngreen\nblue\npurple\nred\norange\n";
            while (true){
                cin >> color;
                if ((color == "yellow") || (color == "green") || (color == "blue") || (color == "purple") || (color == "red") || (color == "orange")){ // If input is one of these colors
                    bag.push_back(color);   // Add color to the bag
                    break;
                }
                else{
                    cout << "Please type a color from the list in lowercase.";  // Message to tell the user their input didn't work and to try again
                }
            }
        }
        else if (userInput == 2){   // Marble subtraction
            cout << "Type the color you want to remove.\nyellow\ngreen\nblue\npurple\nred\norange\n";
            while (true){
                cin >> color;
                if ((color == "yellow") || (color == "green") || (color == "blue") || (color == "purple") || (color == "red") || (color == "orange")){
                    list<string>::iterator iter = std::find(bag.begin(), bag.end(), color); // Iterator to search for the color in the bag
                    if (iter != bag.end()){
                        bag.erase(iter);    // Erases first occurrence of the marble color
                    break;
                    }
                }
                else{
                    cout << "Please type a color from the list in lowercase.";
                }
            }    
        }
        else if (userInput == 3){   // Display the bag of marbles
            cout << "The bag contains: \n";
            for (l_iter = bag.begin(); l_iter != bag.end(); l_iter++)
                cout << *l_iter << "\n";    // prints out the marbles in the bag using iteration
        }
        else{   // Quit
            cout << "Goodbye";
            break;
        }
}   }