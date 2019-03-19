#include <iostream>
#include <sstream>
#include "FeetInches.h"
#include "LandTrac.h"
using namespace std;

void menu();

int main()
{
    bool stay = true;                   
    string choice, word, text;   
    int feet, inches;
    FeetInches width, length;
    LandTract myProperty;
    auto menu = [] ( ) {
    	cout << "_______ LandTract Class Test Menu __________\n"
    	     << "    m - menu\n"
    		 << "    n - new LandTract\n"
    		 << "    d - display the LandTract attributes\n"
    		 << "    q - Quit\n";

        };
        menu();
	while(stay) {           
        cout << "    Enter your choice: ";
		cin >> choice;      
		cin.ignore();
		char ch = choice[0];

		switch(ch) { 
            case 'n':
            case 'N': 
            {
                cout << "      Enter Tract Width in Feet, then Inches: \n";
                cout << "      Enter Feet: ";
                cin >> feet;
                cout << "Enter Inches: ";
                cin >> inches;
                
                cout << "      Enter Tract Length in Feet, then Inches: \n";
                cout << "Enter Feet: ";
                cin >> feet;
                cout << "Enter Inches: ";
                cin >> inches;
                
                
                cout << endl;
                break;
            }
            case 'd': 
            case 'D': // Display this LandTract
            {
                // Display the area.
            	cout << "      the width is " << myProperty.getWidth()
            	     << "\n      the length is " << myProperty.getLength()
            	     << "\n      the area is " << myProperty.getArea()
            	     << "\n\n";
                break;
            }

            case 'm': case 'M': 
                menu(); break;
            case 'q': case 'Q': // quit
				stay = false;
				break;

			default: // Invalid! Tells user to try again
				cout << "\nInvalid command!\nTry again!\n\n";
        }
    }
    cout << "\nProgram exit!";
}

