#include <iostream>
#include "board.h"
using namespace std;

int main() {
    board board;
    int numberChoice;
    bool exit = false;
    board.intializeBugs("bugs.txt");
    while(!exit){
        cout << " =============================================" << endl;
        cout << " |           Bug's Life Feature Menu         |" << endl;
        cout << " =============================================" << endl;
        cout << " |           [1]. Display All Bugs           |" << endl;
        cout << " |           [2]. Display Bug By ID          |" << endl;
        cout << " |           [0]. Exit The Program           |" << endl;
        cout << " =============================================\n" << endl;

        cout << "Please choice any number you want." << endl;
        cin >> numberChoice;
        switch (numberChoice) {
            case 1:
                board.displayAllBugs();
                break;
            case 2:
                int BugId;
                cout << "Please enter a Bug Id to search (eg. 101,102...)";
                cin >> BugId;
                board.findAndDisplayBug(BugId);
                break;
            case 0:
                exit = true;
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout<<"invalid choice, please try it again" << endl;
                break;
        }
    }


    return 0;


}
